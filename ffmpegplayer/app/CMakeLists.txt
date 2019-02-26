# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)


#file(GLOB source_file /src/main/cpp/*.cpp)
file(GLOB source_file src/main/cpp/*.cpp)

add_library( # Sets the name of the library.
        native-lib

        # Sets the library as a shared library.
        SHARED

        # Provides a relative path to your source file(s).
        ${source_file})



include_directories(src/main/cpp/include)

# ANDROID_ABI和CMAKE_ANDROID_API 或者直接选择armeabi-v7a   这三个的区别?


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -L${CMAKE_SOURCE_DIR}/src/main/cpp/libs/armeabi-v7a")


target_link_libraries( # Specifies the target library.
        native-lib

        avformat avcodec avfilter    avutil swresample swscale

        log)