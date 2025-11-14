cmake_minimum_required(VERSION 3.22.1)
project("edgedetector")

get_filename_component(OPENCV_SDK_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../../../../opencv-android-sdk/sdk/native/jni" ABSOLUTE)
set(OpenCV_DIR "${OPENCV_SDK_PATH}/abi-${ANDROID_ABI}")

message(STATUS "OpenCV_DIR: ${OpenCV_DIR}")
message(STATUS "ANDROID_ABI: ${ANDROID_ABI}")

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_library(native-lib SHARED
        native-lib.cpp)

target_link_libraries(native-lib
        ${OpenCV_LIBS}
        jnigraphics
        log
        android)

set_target_properties(native-lib PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON)