PURPLE		= \033[0;35m
MAGENTA		= \033[0;95m
ENDCOLOR	= \033[0m

NAME	= so_long
LIB		= src/libft/libft.a
MLX		= mlx/libmlx.a
MAPS	= maps
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g#3 -fsanitize=address
MLX_FLAGS = -framework OpenGL -framework AppKit
SRC		= 	src/main.c\
			src/draw_map.c\
			src/manage_map.c\
			src/move_player.c\
			src/manage_hook.c\
			src/check_if_map.c\
			src/free.c\
			src/get_next_line_bonus.c

OBJ_DIR = obj
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all:  $(NAME) draw

export MAKEFLAGS += --silent

$(LIB):
		@echo "Building $@..."
		make --silent -C src/libft/

$(MLX):
		@echo "Building $@..."
		make --silent -C mlx/

$(OBJ_DIR)/%.o: %.c
		@echo "Compiling $<..."
		mkdir -p obj/src
		$(CC) $(CFLAGS) -c $< -o $@ #>/dev/null 2>&1

draw:
		@echo "${PURPLE}"
		@echo "███╗   ███╗ █████╗ ██████╗ ██╗ █████╗     ███████╗"
		@echo "████╗ ████║██╔══██╗██╔══██╗██║██╔══██╗    ██╔════╝"
		@echo "██╔████╔██║███████║██████╔╝██║███████║    ███████╗"
		@echo "██║╚██╔╝██║██╔══██║██╔══██╗██║██╔══██║    ╚════██║"
		@echo "██║ ╚═╝ ██║██║  ██║██║  ██║██║██║  ██║    ███████║"
		@echo "╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚═╝  ╚═╝    ╚══════╝"
		@echo ""
		@echo "███████╗ ██████╗         ██╗      ██████╗ ███╗   ██╗ ██████╗"
		@echo "██╔════╝██╔═══██╗        ██║     ██╔═══██╗████╗  ██║██╔════╝"
		@echo "███████╗██║   ██║        ██║     ██║   ██║██╔██╗ ██║██║  ███╗"
		@echo "╚════██║██║   ██║        ██║     ██║   ██║██║╚██╗██║██║   ██║"
		@echo "███████║╚██████╔╝███████╗███████╗╚██████╔╝██║ ╚████║╚██████╔╝"
		@echo "╚══════╝ ╚═════╝ ╚══════╝╚══════╝ ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝"
		@echo ""
		@echo "${ENDCOLOR}"

$(NAME): $(LIB) $(OBJ) $(MLX)
		$(CC) $(CFLAGS) $(MLX_FLAGS) $(OBJ) $(LIB) $(MLX) -o $(NAME)

clean:
		rm -rf $(OBJ)
		make -C mlx clean

fclean:
	rm -rf $(OBJ)
	rm -rf $(NAME)
	make -C mlx clean

re: fclean all

docker:
	docker build -t ubuntu .
	docker run -it --name ubuntudk ubuntu

docker_start:
	docker start -i ubuntudk

docker_run:
	docker exec -it ubuntudk /bin/zsh

prune:
	docker system prune -a --volumes

valgrind:
	valgrind ./$(NAME)
.PHONY: all clean fclean re norm
