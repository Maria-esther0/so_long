
NAME	= libft.a

SRCS	= 	ft_atoi.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_strchr.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memset.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_putstr_fd.c \
			ft_strchr.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strrchr.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_substr.c \
			ft_putchar_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_strnstr.c \
			ft_split.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_itoa.c \
			printf/ft_check_type.c \
			printf/ft_printf.c \
			printf/ft_put_d_i.c \
			printf/ft_put_s.c \
			printf/ft_put_u.c \
			printf/ft_put_x.c \
			printf/ft_put_p.c \
			ft_strdup.c
			#get_next_line/get_next_line.c\
			#get_next_line/get_next_line_bonus.c

OBJS	= ${SRCS:.c=.o}

CCAF 	= gcc -Wall -Wextra -Werror

RM		= rm -f

${NAME}:	$(OBJS)
			ar rcs $(NAME) $(OBJS)

#			${CCAF} -o ${NAME} ${SRC}
	
all: 		${NAME}

run:		${OBJS}	
			${CCAF} -o ${NAME} ${SRC}
clean:		
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re .c.o
