cmake_minimum_required(VERSION 3.5)

add_definitions(-DDATA_DIR_PATH=\"${CMAKE_CURRENT_SOURCE_DIR}/../Data/\")

project( underwater_test  )

include_directories( underwater_test
        /usr/local/include
        /usr/include/freetype2) # to avoid ft2 include problem with ft2build.h

find_package( Stonefish  REQUIRED )

add_executable(underwater_test main.cpp UnderwaterTestManager.cpp UnderwaterTestApp.cpp)

target_include_directories(underwater_test 
                PRIVATE /usr/include/freetype2)
target_link_libraries(underwater_test 
                PUBLIC Stonefish::Stonefish ) # avoid linker issue to stonefish lib