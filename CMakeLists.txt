cmake_minimum_required(VERSION 3.26)
project(C_LANG_PROJECTS C)

set(CMAKE_C_STANDARD 17)

add_executable(C_LANG_PROJECTS main.c
        DIGITAL-CLOCK/clock_timer.c
        DIGITAL-CLOCK/clock_timer.h
        DIGITAL-CLOCK/display_current_time.c
        DIGITAL-CLOCK/display_current_time.h
)
