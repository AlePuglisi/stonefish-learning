import cv2
import numpy as np 
import matplotlib.pyplot as plt
import os

class SonarOpticalFlowRansacPose: 

    def __init__(self, debug=False, max_range=5, max_aperture_deg=130, height=100, width=100, min_magnitude=10, n_points=10, threshold=100, max_iter=50):
        # Logging debugging info 
        self.debug = debug

        # --- SONAR IMAGE parameters ---   
        # Current sonar configuration (maximum range and aperture)
        # While the range is configurable (0.1m-30m), 
        # The aperture is fixed between high frequency mode (40 deg) and low frequency 130 deg)
        self.max_range = max_range                       
        self.max_aperture_deg = max_aperture_deg
        # Sonar image dimensions
        self.height = height
        self.width = width

        # Resolution on the sonar x axis [m/pixels] (origin-to-forward)
        self.resolution_x = self.max_range/self.height              
        # Resolution on the sonar y axis [m/pixels] (origin-to-right)
        self.max_aperture_rad = self.max_aperture_deg * np.pi / 180
        self.resolution_y = 2*(self.max_range*np.sin(self.max_aperture_rad/2))/self.width    
        
        # --- OPTICAL FLOW ---    
        # Initialize optical flow matrix in the image coordinates
        self.cv_flow = np.zeros(shape=(self.height, self.width, 2))  # (y,x,flow) optical flow matrix, OpenCV convention
        # Minimal flow magnitude to be considered
        self.min_magnitude = min_magnitude

        # --- FRAME Transformation parameters ---         
        # Fixed transformation from Im frame to Sonar frame (S_p = S_T_Im * Im_p)
        # Im frame (opencv convention): top left corner of the image, y downward, x right-oriented
        # To Sonar frame (centered in the sonar = middle bottom): x upward, y right-oriented 
        self.S_R_Im = np.array([[0, -1], [1, 0]])              # Rotation    from Im (OpenCV) to Sonar
        self.S_t_Im = np.array([self.height, -self.width//2])  # Translation from Im (OpenCV) to Sonar 
        self.S_T_Im = np.vstack([
            np.column_stack([self.S_R_Im, self.S_t_Im]),
            [0, 0, 1]
        ])

        # --- RANSAC parameters --- 
        # Parameters for Ransac Estimation
        # Best model unkowns (translation in x, y and rotation)
        self.tx_best = 0
        self.ty_best = 0
        self.dtheta_best = 0
        # Best RANSAC inliers 
        self.inliers_best = None
        # Number of points used for estimation 
        self.n_points = n_points 
        # List of inliers [[x1,y1], [x2, y2], ..]
        self.inliers = np.zeros(shape=(n_points, 2), dtype=np.int32)
        # Inliers-outliers threshold 
        self.threshold = threshold
        # Max RANSAC iteration 
        self.max_iter = max_iter

        print(f'''SonarOpticalFlowRansacPose initialized:
                    range_max={self.max_range:.2f} m  
                    aperture_max={self.max_aperture_deg:.2f} deg
                    x_res={self.resolution_x:.4f} m/pixels
                    y_res={self.resolution_y:.4f} m/pixels''')


    def update_resolution(self):
        # Resolution on the sonar x axis [m/pixels] (origin-to-forward)
        self.resolution_x = self.max_range/self.height              
        # Resolution on the sonar y axis [m/pixels] (origin-to-right)
        self.max_aperture_rad = self.max_aperture_deg * np.pi / 180
        self.resolution_y = 2*(self.max_range*np.sin(self.max_aperture_rad/2))/self.width    

    def update_Im_to_S_Transform(self):
        # In case the image shape chages due to sonar reconfiguration 
        self.S_t_Im = np.array([self.height, -self.width//2])  # Translation from Im (OpenCV) to Sonar 
        # The rotation matrix remain the same 
        self.S_T_Im = np.vstack([
            np.column_stack([self.S_R_Im, self.S_t_Im]),
            [0, 0, 1]
        ])

    # In case the sonar image frame size changes (e.g. different range or aperture - freq mode)
    def set_image_shape(self, frame):
        self.height = frame.shape[0]
        self.width = frame.shape[1]
        self.update_resolution()
        self.update_Im_to_S_Transform()

        print(f'''SonarOpticalFlowRansacPose Updated:
                    range_max={self.max_range:.2f} m  
                    aperture_max={self.max_aperture_deg:.2f} deg
                    height={self.height:.2f} pixels
                    width={self.width:.2f} pixels
                    x_res={self.resolution_x:.4f} m/pixels
                    y_res={self.resolution_y:.4f} m/pixels''')

    # In case the sonar configuration changes (e.g. different range or aperture - freq mode)
    def set_sonar_config(self, new_max_range, new_max_aperture):
        self.max_range = new_max_range                       
        self.max_aperture_deg = new_max_aperture
        self.update_resolution()
        self.update_Im_to_S_Transform()

        print(f'''SonarOpticalFlowRansacPose Updated:
                    range_max={self.max_range:.2f} m  
                    aperture_max={self.max_aperture_deg:.2f} deg
                    x_res={self.resolution_x:.4f} m/pixels
                    y_res={self.resolution_y:.4f} m/pixels''')

    def compute_image_flow(self, s1_frame, s2_frame, min_flow_magnitude=5):
        # Computing sonar image optical flow (with OpenCV convention)
        # It return a vector field describing the pixel gradient as image motion 
        # from frame S1 to S2, therefore it is anchored to frame S1 and describe the difference 
        # as p_s2 - p_s1 pixel motion in the image frame 
        self.cv_flow = cv2.calcOpticalFlowFarneback(
            s1_frame, 
            s2_frame, 
            None,
            pyr_scale=0.5,       # Pyramid scale
            levels=3,            # Number of pyramid layers
            winsize=10,          # Averaging window size
            iterations=3,        # Number of iterations at each pyramid level
            poly_n=5,            # Size of pixel neighborhood
            poly_sigma=1.2,      # Standard deviation for Gaussian
            flags=0
        )
        
        # Consider only flow above a given threshold
        magnitude = np.sqrt(self.cv_flow[:,:,0]**2 + self.cv_flow[:,:,1]**2)
        mask = magnitude <= min_flow_magnitude
        self.cv_flow[mask] = [0,0]  # Zero out low-magnitude vectors in place

        return self.cv_flow
    
    def apply_flow(self, p_s1):
        # Project points based on sonar image flow 
        # p_s1 measured Image coordinates 
        x = p_s1[:, 0].astype(np.int32)
        y = p_s1[:, 1].astype(np.int32)
        
        # Convert optical flow in Sonar coordinates
        flow_Im = self.cv_flow[y, x]        
        flow_S = (self.S_R_Im @ flow_Im.T).T

        # Invert y and x that are in the opposite order 
        # p_s1 = np.column_stack([p_s1[:,1], p_s1[:,0]])
        # Create homogeneus coordinates
        p_s1_tilde = np.hstack([p_s1.astype(np.float64), np.ones((len(p_s1), 1))])
        
        # Transform p_s1 in Sonar coordinates 
        p_s1_tilde = (self.S_T_Im @ p_s1_tilde.T).T                
        p_s1 = p_s1_tilde[:, :2]   

        # Compute new pixel positions in Sonar coordinates, based on real flow  
        p_s2_flow = p_s1 + flow_S         
        # result: pixel coordinates in S1 and the expected new position
        return p_s1, p_s2_flow
    
    def compute_S1_to_S2_transform(self, dx, dy, dth):
        # Convert 3DOF motion to transformation matrix S2_T_S1 
        # (to move from frame S1 to S2 = frame S1 measured in frame S2) 
        # p_S2 = S2_T_S1 * p_S1
        #return np.linalg.inv(np.array([[np.cos(dth), -np.sin(dth), dx], [np.sin(dth), np.cos(dth), dy], [0, 0, 1]]))
        # Explicit inverse matrix S2_T_S1 (avoid inversion)
        return np.array([[np.cos(dth), np.sin(dth), -dx*np.cos(dth)-dy*np.sin(dth)], 
                         [-np.sin(dth), np.cos(dth), dx*np.sin(dth)-dy*np.cos(dth)], 
                         [0,0,1]])
    
    def compute_S2_to_S1_transform(self, dx, dy, dth):
        # Convert 3DOF motion to transformation matrix S1_T_S2 
        # (to move from frame S2 to S1 = frame S2 measured in frame S1) 
        # p_S1 = S1_T_S2 * p_S2
        return np.array([[np.cos(dth), -np.sin(dth), dx], 
                         [np.sin(dth), np.cos(dth), dy], 
                         [0, 0, 1]])

    def compute_equation_matrix(self, p_s1, p_s2):
        # Compute the matrices associated to the system of equations from flow correspondances
        # It expects p_s1 and p_s2 to be measured in local coordinates S1, S2 and stored as [[x1,y1],[x2,y2],...]
        alpha = p_s2[:,1] / p_s2[:,0]
        beta  = p_s2[:,0] + np.square(p_s2[:,1])/p_s2[:,0]
        gamma = p_s1[:,1] - p_s2[:,1]/p_s2[:,0] * p_s1[:,0]

        A = np.column_stack([-alpha, np.ones(len(alpha)), beta])
        b = np.array(gamma)

        return A, b

    def solve_pose(self, A : np.ndarray , b: np.ndarray):
        # Solve the system of equations from flow correspondances
        # Result: estimated sensor motion as [dx,dy,dth]
        if A.shape[0] ==3 and A.shape[1] ==3: # inversion 
            x = np.linalg.inv(A) @ b
            x[2] = np.arcsin(x[2])
            return x
        else: # Least-squares (pseudo-inverse)
            x = (np.linalg.inv(A.T @ A) @ A.T) @ b
            x[2] = np.arcsin(x[2])
            return x

    def solve_pose_robust(self, A: np.ndarray, b: np.ndarray):
        b = b.ravel()
        if A.shape[0] == 3 and A.shape[1] == 3:
            try:
                x = np.linalg.inv(A) @ b
            except np.linalg.LinAlgError:
                x, _, _, _ = np.linalg.lstsq(A, b, rcond=None)
            x[2] = np.arcsin(np.clip(x[2], -1.0, 1.0))
            return x
        else:
            # lstsq handles singular/near-singular A.T@A automatically
            x, _, _, _ = np.linalg.lstsq(A, b, rcond=None)
            x[2] = np.arcsin(np.clip(x[2], -1.0, 1.0))
            return x
      
    def measure_consensus(self, p_s1, T_s1_s2_estim):
        # Check which vectors are coherent with the computed motion 
        # invert y and x that are in the opposite order 
        # p_s1 = np.column_stack([p_s1[:,1], p_s1[:,0]])
        p_s1_tilde = np.hstack([p_s1.astype(np.float64), np.ones((len(p_s1), 1))])
        # convert p_s1 from Im to Sonar coordinate frame 
        p_s1_tilde = (self.S_T_Im @ p_s1_tilde.T).T  
        # get the 2D vector of the homogeneus one 
        p_s1_sonar = p_s1_tilde[:, :2]  

        # Compute p_s2 in S2 frame by projecting p_s1 with estimated transform 
        p_s2_tilde = (T_s1_s2_estim @ p_s1_tilde.T).T                
        p_s2_estim = p_s2_tilde[:, :2]    

        # Get the OF in Sonar frame (using original p_s1 in image frame)    
        flow_Im = self.cv_flow[p_s1[:,1], p_s1[:,0]] 
        flow_S = (self.S_R_Im @ flow_Im.T).T

        # Initialize flow 
        estim_flow = p_s2_estim - p_s1_sonar
        # Search for inliers based on real flow with respect to estimated flow 
        # for idx, p in enumerate(p_s1_sonar):
        #     error = np.sqrt((flow_S[idx, 0] - estim_flow[idx, 0])**2 + 
        #                     (flow_S[idx, 1] - estim_flow[idx, 1])**2)
        #     # print(f"Point: {p_s1[idx]}\nCV Flow: {flow_S[idx]}\nEstim Flow: {estim_flow[idx]}\nError: {error}")
        #     if error < self.threshold and p not in self.inliers: 
        #         # Store inliers in the image frame 
        #         self.inliers = np.append(self.inliers, [[p_s1[idx,0], p_s1[idx,1]]], axis=0)
        
        errors = np.sqrt((flow_S[:, 0] - estim_flow[:, 0])**2 + 
                         (flow_S[:, 1] - estim_flow[:, 1])**2)
        mask_consensus = errors <= self.threshold
        new_inliers = p_s1[mask_consensus]

        # Extend inliers set without duplicates
        if len(self.inliers) > 0 and len(new_inliers) > 0:
            combined = np.vstack([self.inliers, new_inliers])
            # np.unique on rows: axis=0 removes duplicate [x,y] pairs
            self.inliers = np.unique(combined, axis=0)
        elif len(new_inliers) > 0:
            self.inliers = new_inliers

        # Convert inliers set in the Sonar frame 
        inliers_tilde = np.hstack([new_inliers, np.ones((len(new_inliers), 1))]) 
        inliers_tilde_sonar = (self.S_T_Im @ inliers_tilde.T).T     
        inliers_sonar = inliers_tilde_sonar[:, :2]  

        # Result inliers in Image frame and in sonar frame         
        return self.inliers, inliers_sonar

    def estimate_2d_flow_motion(self, s1_frame, s2_frame):
        # --- RANSAC sonar 3 DOF 2D motion estimation ---
        # --- 1) Initialize Image Flow and filter out useless flow vectors ---
        # The flow is stored in cv_flow attribute
        self.compute_image_flow(s1_frame, s2_frame, min_flow_magnitude = self.min_magnitude)
        
        # Get indices where flow is higher than min magnitude 
        nonzero_y, nonzero_x = np.where(
            np.sqrt(self.cv_flow[:,:,0]**2 + self.cv_flow[:,:,1]**2) >= self.min_magnitude
        )
        # Get useful flow coordinates to sample the image space 
        nonzero_coords = np.column_stack((nonzero_x, nonzero_y))

        # Remove points where x == 0 or y == 0
        # valid_mask = (nonzero_coords[:, 0] != 0) & (nonzero_coords[:, 1] != 0)
        # nonzero_coords = nonzero_coords[valid_mask]

        # Guard: not enough flow points to sample from - return zero motion estimation 
        if len(nonzero_coords) < self.n_points:
            # print(f"[WARN] Not enough flow points ({len(nonzero_coords)}) to sample {self.n_points}, skipping frame.")
            return np.array([0.0, 0.0, 0.0], dtype=np.int32)

        # --- 2) Start RANSAC Iterations ---       
        n_iter = 0
        n_best_inliers = self.n_points
        # Initialize set of best inliers and current inliers 
        self.inliers_best = None
        self.inliers = np.zeros(shape=(self.n_points, 2), dtype=np.int32)
        
                
        while n_iter < self.max_iter:

            # --- 2.1) Initialize empty inliers set --- 
            # Re-initialize inlier set
            self.inliers = np.zeros(shape=(self.n_points, 2), dtype=np.int32)
            
            # --- 2.2) Select n_points random points in the non-zero flow image ---
            sampled_idx = np.random.choice(len(nonzero_coords), size=self.n_points, replace=False)
            self.inliers = nonzero_coords[sampled_idx]  # (n_points, 2) of [x, y]
            
            # Initialize best inliers as the initial set of inliers 
            if self.inliers_best is None: 
                self.inliers_best = self.inliers.copy()

            # --- 2.3) Apply flow on the randomly selected points ---
            # Now p_s1 and p_s2 are in the sonar frame 
            p_s1, p_s2 = self.apply_flow(self.inliers)

            # --- 2.4) Solve the pose estimation problem based on flow constraints ---
            A, b = self.compute_equation_matrix(p_s1, p_s2)
            x = self.solve_pose(A, b)

            # Re-scale based on metric/pixels resolution
            x[0] = x[0] * self.resolution_x 
            x[1] = x[1] * self.resolution_y

            # print(f"Estimate: tx=", x[0], "m | ty=", x[1], " m | theta=", x[2], " rad")
            
            # Compute tranformation matrix 
            S2_T_S1_estim = self.compute_S1_to_S2_transform(x[0], x[1], x[2])

            # --- 2.5) Measure Consensus and update inliers ---
            self.inliers, inliers_sonar = self.measure_consensus(nonzero_coords, S2_T_S1_estim)
            n_inliers = len(self.inliers)                                      

            # Update best model if higher number of inliers are found 
            if n_inliers > n_best_inliers: 
                self.tx_best = x[0]
                self.ty_best = x[1]
                self.dtheta_best = x[2]

                self.inliers_best = self.inliers.copy()
                n_best_inliers = n_inliers

            n_iter += 1
            # input("Press Enter for Next Iteration")

        # --- 3) Recompute best pose estimation using all inliers of the best model ---
        # Use p_s1,p_s2 in Sonar frame 
        p_s1, p_s2_optim = self.apply_flow(self.inliers_best)
        A_optim,b_optim = self.compute_equation_matrix(p_s1, p_s2_optim)
        x_optim = self.solve_pose(A_optim, b_optim)
        
        # Re-scale based on metric/pixels resolution
        x_optim[0] = x_optim[0] * self.resolution_x 
        x_optim[1] = x_optim[1] * self.resolution_y

        # Guard condition in case of unexpected failures and nan values 
        if(np.isnan(x_optim).sum() > 0):
            return np.array([0.0, 0.0, 0.0], dtype=np.int32)

        return x_optim
    




