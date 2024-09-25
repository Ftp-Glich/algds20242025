add_executable(Lab1 tests.c)

set(GOOGLETEST_VERSION 1.15.2)
enable_testing()  
add_subdirectory(googletest) 

include_directories("C:/Users/Egor/Documents/desktop/alg/algds20242025/lab1/include")
include_directories("googletest/include")

target_link_libraries(Lab1 PRIVATE
gtest
)

include(GoogleTest)
gtest_discover_tests(Lab1)
