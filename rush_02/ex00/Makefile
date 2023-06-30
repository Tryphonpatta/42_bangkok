NAME		= rush-02

all : $(NAME)

$(NAME) : 
	cc -Wall -Werror -Wextra main.c -o $(NAME)

clean:

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re