SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

SRCS = ${addprefix ./srcs/, ${SRC}}

OBJS = ${SRCS:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

all:	${NAME}

.c.o:
	${CC} ${CFLAGS} -c -I ./includes/ft.h $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar rc ${NAME} ${OBJS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f libft.a

re: fclean all