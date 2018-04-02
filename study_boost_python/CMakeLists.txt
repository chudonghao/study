cmake_minimum_required(VERSION 3.6)
project(study_boost_python)

set(CMAKE_CXX_STANDARD 11)

find_package(Boost COMPONENTS python3)
find_package(PythonLibs)

include_directories(${PYTHON_INCLUDE_DIR})

add_library(
        study_boost_python
        SHARED
        main.cpp
)
target_link_libraries(
        study_boost_python
        ${PYTHON_LIBRARY}
        ${Boost_PYTHON3_LIBRARY_RELEASE}
)
