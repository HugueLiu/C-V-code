# Pangolin需要使用C++11及以上来编译
set(CMAKE_CXX_FLAGS "-std=c++11")

find_package(Pangolin 0.5 REQUIRED)
include_directories(${Pangolin_INCLUDE_DIRS})

add_executable(test test.cpp)
target_link_libraries(test ${Pangolin_LIBRARIES})
