# 最低cmake版本
cmake_minimum_required(VERSION 2.8)

# 项目信息
project (test)

# 设置编译类型(Release/Debug), 默认为Debug
set(CMAKE_BUILD_TYPE Release)

# 设置C++标准版本
set(CMAKE_CXX_FLAGS "-std=c++11")

# 输出信息
message("this is a message.")

find_package(OpenCV REQUIRED)
# 输出的多个目录没有分割
# 且目录为空时会出错
message(${OpenCV_INCLUDE_DIRS})
# 输出的多个目录间有分号隔开
message("${OpenCV_INCLUDE_DIRS}")

# 生成可执行文件
add_executable(test test.cpp)

# 查找当前目录下所有源文件, 并保存到变量DIR_SRCS中
aux_source_directory(. DIR_SRCS)
add_executable(test2 ${DIR_SRCS}})