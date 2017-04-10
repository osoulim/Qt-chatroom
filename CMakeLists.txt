cmake_minimum_required(VERSION 3.6)
project(QtChatRoom)

set(CMAKE_CXX_STANDARD 11)

#project directory
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)

set(CMAKE_PREFIX_PATH /home/mamzi/Qt5.8.0/5.8/gcc_64/)

#find the library
find_package(Qt5Widgets)

set(SOURCE_FILES main.cpp)
add_executable(QtChatRoom ${SOURCE_FILES})

target_link_libraries(QtChatRoom Qt5::Widgets)