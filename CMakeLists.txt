cmake_minimum_required(VERSION 3.22)
project(so_long C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_C_STANDARD 99)
add_compile_options(-Wall -Werror -Wextra)
#add_compile_options(-O3 -march=native)

INCLUDE_DIRECTORIES(/System/Library/Frameworks)

SET(LIBS mlx ft)

if (APPLE)
    FIND_LIBRARY(OPENGL_LIBRARY OpenGL)
    FIND_LIBRARY(APPKIT_LIBRARY AppKit)
    SET(LIBS ${LIBS} ${OPENGL_LIBRARY} ${APPKIT_LIBRARY})
else ()
    SET(LIBS ${LIBS} Xext X11 m)
endif ()

include_directories(includes mlx src/libft src/libft/printf src/libft/get_next_line)

link_directories(src/libft src/libft/printf mlx)

add_executable(
        so_long
        includes/so_long.h
        src/main.c
        src/check_if_map.c
        src/draw_map.c
        src/free.c
        src/manage_map.c
        src/move_player.c
        src/manage_hook.c
        src/get_next_line_bonus.c
        src/get_next_line_bonus.h
)

TARGET_LINK_LIBRARIES(so_long ${LIBS})