# 最低cmake版本
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

# 设置编译类型(Release/Debug), 默认为Debug
SET(CMAKE_BUILD_TYPE Release)

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
