#!/bin/bash

#cd src/libft
#make re
#cd ../../
make re
leaks --atExit -- ./so_long maps/map_0.ber

