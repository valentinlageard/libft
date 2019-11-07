NAME		= libft.a

SRC			= ft_strlen.c \
				ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_atoi.c \
				ft_strncmp.c \
				ft_strdup.c \
				ft_strjoin.c \
				ft_memset.c \
				ft_bzero.c \
				ft_memcpy.c \
				ft_memccpy.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_split.c \
				ft_strtrim.c \
				ft_strmapi.c \
				ft_substr.c \
				ft_calloc.c \
				ft_strnstr.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_itoa.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

OBJS		= ${SRC:.c=.o}

CC 			= gcc ${FLAGS} -I.

FLAGS		= -Wall -Wextra -Werror

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

all:	${NAME}

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

test:
	gcc test.c -L. -lft -o test

.PHONY: all clean fclean re
