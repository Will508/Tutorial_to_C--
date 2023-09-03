cmake_minimum_required(VERSION 3.16)

# set the project name
project(Tutorial VERSION 1.0)


# add the excutable
add_executable(main tutorial.cpp)

# set the path for project output
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR})

