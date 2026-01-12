cmake_minimum_required(VERSION 4.1)
project(C C)

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_executable(
        biggest_num.c
        bubble_sort.c
        factorial.c
        fibonacci.c
        person.c
        prime.c
        word_occurrences.c)