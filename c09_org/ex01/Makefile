NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
ICL = includes
OBJ = ${SRC:.c=.o}



.c.o:	
	${CC} ${CFLAGS} -c -I ${ICL} $< -o ${<:.c=.o}

$(NAME): $(OBJ)
		ar rc $(NAME) $(OBJ) 
		ranlib $(NAME)

all: ${NAME}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf *.a

re : fclean all