cmake_minimum_required(VERSION 3.27)
project(LAB_030324)

set(CMAKE_CXX_STANDARD 17)

add_executable(Main main.c
        functions/f_display_array.c
        functions/f_display_array.h
        functions/f_user_input.c
        functions/f_user_input.h
        simple_math/f_min.c
        simple_math/f_max.c
        simple_math/f_mean.c
        simple_math/simple_math.h)

add_executable(Tests unit_tests.c
        functions/f_display_array.c
        functions/f_display_array.h
        functions/f_user_input.c
        functions/f_user_input.h
        simple_math/f_min.c
        simple_math/f_max.c
        simple_math/f_mean.c
        simple_math/simple_math.h)
