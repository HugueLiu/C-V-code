find_package(PCL REQUIRED)
# 只添加部分组件
find_package(PCL REQUIRED COMPONENT common io)

include_directories(${PCL_INCLUDE_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(test test.cpp)
target_link_libraries(test ${PCL_LIBRARIES})