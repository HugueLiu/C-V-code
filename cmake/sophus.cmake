find_package(Sophus REQUIRED)
include_directories(${Sophus_INCLUDE_DIRS})

add_executable(test test.cpp)
target_link_libraries(test ${Sophus_LIBRARIES})