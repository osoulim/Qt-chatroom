cmake_minimum_required(VERSION 3.6)
project(QtChatRoom)

set(CMAKE_CXX_STANDARD 11)

#project directory
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)

set(CMAKE_PREFIX_PATH /home/mamzi/Qt5.8.0/5.8/gcc_64/)

#find the library
find_package(Qt5Widgets)
find_package(Qt5Network)

set(SOURCE_FILES main.cpp Lgwindow.cpp Lgwindow.h Chwindow.cpp Chwindow.h Network_mg.cpp Network_mg.h client.cpp client.h)
add_executable(QtChatRoom ${SOURCE_FILES})

target_link_libraries(QtChatRoom Qt5::Widgets Qt5::Network)