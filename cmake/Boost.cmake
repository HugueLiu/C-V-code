find_package(Boost REQUIRED)

# 只添加部分组件
# find_package(Boost REQUIRED COMPONENTS filesystem)

include_directories(${Boost_INCLUDE_DIRS})

add_executable(test test.cpp)
target_link_libraries(test ${Boost_LIBRARIES})