add_executable(Lab1 main.c)

include_directories("C:/Users/Egor/Documents/desktop/alg/algds20242025/lab1/include")

target_link_libraries(Lab1 
str_list
join
)

add_subdirectory(list)
add_subdirectory(joiner)