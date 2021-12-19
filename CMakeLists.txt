# Configure minimum CMake version
cmake_minimum_required (VERSION 3.8)

# Setup the project
project (SinePlot VERSION 1.0.0 LANGUAGES CXX)

# Include external scripts
include(cmake/windeployqt.cmake)

# Configure build
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Include Qt5
set(CMAKE_PREFIX_PATH "C:/Qt/5.12.12/msvc2017_64/lib/cmake/Qt5")
find_package(Qt5 COMPONENTS Widgets REQUIRED)

# Setup deploy folder
set(EXECUTABLE_OUTPUT_PATH "${CMAKE_CURRENT_SOURCE_DIR}/deploy")

# Configure compilation executable. Note WIN32 will hide console for GUI applications
add_executable (SinePlot WIN32 "sources/main.cpp")

# Link Qt libraries to executable
target_link_libraries(SinePlot Qt5::Widgets)

# Copy required Qt dll files to executable folder
windeployqt(SinePlot)
