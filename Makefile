PURPLE		= \033[0;35m
MAGENTA		= \033[0;95m
ENDCOLOR	= \033[0m

NAME	= so_long
LIB		= src/LIBFT/ft_libft/libft.a
LIB2	= src/LIBFT/libftprintf/libftprintf.a
MAPS	= maps
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -g3 #-fsanitize=address
SRC		= 	src/main.c\
			src/\
			src/\
			src/\
			src/\
			src/\
			src/\
			src/\
			src/\
			src/\
			src/\
			src/\
			src/
OBJ_DIR = obj
OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)

all:  $(NAME) draw

export MAKEFLAGS += --silent

$(LIB):
		@echo "Building $@..."
		make --silent -C src/LIBFT/ft_libft/

$(LIB2):
		@echo "Building $@..."
		make --silent -C src/LIBFT/libftprintf/

$(OBJ_DIR)/%.o: %.c
		@echo "Compiling $<..."
		mkdir -p obj/src
		$(CC) $(CFLAGS) -c $< -o $@ #>/dev/null 2>&1

draw:

		@echo "${PURPLE}"
		@echo "███╗   ███╗ █████╗ ██████╗ ██╗ █████╗     ███████╗           "
		@echo "████╗ ████║██╔══██╗██╔══██╗██║██╔══██╗    ██╔════╝           "
		@echo "██╔████╔██║███████║██████╔╝██║███████║    ███████╗           "
		@echo "██║╚██╔╝██║██╔══██║██╔══██╗██║██╔══██║    ╚════██║           "
		@echo "██║ ╚═╝ ██║██║  ██║██║  ██║██║██║  ██║    ███████║           "
		@echo "╚═╝     ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝╚═╝  ╚═╝    ╚══════╝           "
		@echo ""
		@echo "███████╗ ██████╗         ██╗      ██████╗ ███╗   ██╗ ██████╗ "
		@echo "██╔════╝██╔═══██╗        ██║     ██╔═══██╗████╗  ██║██╔════╝ "
		@echo "███████╗██║   ██║        ██║     ██║   ██║██╔██╗ ██║██║  ███╗"
		@echo "╚════██║██║   ██║        ██║     ██║   ██║██║╚██╗██║██║   ██║"
		@echo "███████║╚██████╔╝███████╗███████╗╚██████╔╝██║ ╚████║╚██████╔╝"
		@echo "╚══════╝ ╚═════╝ ╚══════╝╚══════╝ ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ "
		@echo ""
		@echo "${ENDCOLOR}"

$(NAME): $(LIB) $(LIB2) $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) $(LIB) $(LIB2) -o $(NAME)

clean:
		rm -rf $(OBJ)
		make -C src/LIBFT/ft_libft clean
		make -C src/LIBFT/libftprintf clean
fclean:
		rm -rf $(OBJ)
		rm -rf $(NAME)
		make -C src/LIBFT/ft_libft fclean
		make -C src/LIBFT/libftprintf fclean
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