cmake_minimum_required(VERSION 3.5)

add_definitions(-DDATA_DIR_PATH=\"${CMAKE_CURRENT_SOURCE_DIR}/../Data/\")

project( falling_test  )

include_directories( falling_test
        /usr/local/include
        /usr/include/freetype2) # to avoid ft2 include problem with ft2build.h

find_package( Stonefish  REQUIRED )

add_executable(falling_test main.cpp FallingTestManager.cpp FallingTestApp.cpp)

target_include_directories(falling_test 
                PRIVATE /usr/include/freetype2)
target_link_libraries(falling_test 
                PUBLIC Stonefish::Stonefish ) # avoid linker issue to stonefish lib