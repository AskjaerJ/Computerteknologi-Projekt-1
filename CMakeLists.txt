project(test)

include_directories(include array_queue list_queue test .)
add_executable(banan test/tests.cpp)
add_library(mylib array_queue/array_int_queue.cpp list_queue/list_int_queue.cpp)
target_link_libraries(banan mylib)
add_test(usage_test banan)