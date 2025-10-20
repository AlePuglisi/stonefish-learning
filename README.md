# stonefish-learning
Tutorials and Projects using the Stonefish library for underwater robotics simulation <br/>
Official Documnetation: [Stonefish Doc](https://stonefish.readthedocs.io/en/latest/overview.html)
Stonefish GitHub Repo : [Stonefish GitHub](https://github.com/patrykcieslak/stonefish) 

This repo is not intended to substitute that documentation, but to store a set of examples ready to run after building. <br/>
Furthermore, additional "experiments" on the concept described on the official doc will be stored here. 

> [!NOTE]
> The building configuration in the `CMakeLists.txt` works in my machine, installing the dependency and the Stonefish package as described [here](https://github.com/AlePuglisi/stonefish/blob/master/INSTALLATION_TROUBLESHOOTING.md). <br/>
> I hope that dependenacy issues and linker errors don't occur to those who refer to this examples ...


## Stonefish Installation 
Refer to the simple [step-by-step guide](https://github.com/AlePuglisi/stonefish/blob/master/INSTALLATION_TROUBLESHOOTING.md#installation) from my fork of the official stonefish repo. <br/>
(The official installation guide is [here](https://stonefish.readthedocs.io/en/latest/install.html), my step-by-step report is mainly for my machine reproducibility and all dependency installation process. <br/>
( I work with a Dell PRO Max 16 Laptop, NVIDIA RTX PRO 500 Blackwell Generation Laptop GPU, Intel Core Ultra 9, x86_64 (AMD 64bit), in an `Ubnutu 24.04` OS partition, with a `6.14.0-33-generic` linux kernel.)
## Building and Running Examples

After cloning this repo in your system: 
```
git clone https://github.com/AlePuglisi/stonefish-learning.git
```
And moving inside the cloned repo directory 
```
cd stonefish-learning
```

The buildiing process for every "test" is the classical C++ cmake building.

All the esamples are named as `<example>_test`, to build and run each one:

1. Create a build directory inside of the selected example 
```
cd <example>_test
mkdir build && cd build 
```
2. Build the example (from `<example>_test/build` directory)
```
cmake .. && make
```
3. Once 100% make is reached, the exacutable is generated and is ready to run
```
./<example>_test
```

## Building or Running ERRORS...

In case of errors in the building process or when launching the executable, I'm reporting some of the one that I encountered and how I fix those in [this readme](https://github.com/AlePuglisi/stonefish/blob/master/INSTALLATION_TROUBLESHOOTING.md#troubleshooting). <br/>
Most of this errors are solved thanks to the issues opened on the official Stonefish repo, or caused by my wrong installation of packages and include files. 

