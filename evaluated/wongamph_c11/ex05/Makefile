SRCS	= srcs/do-op.c srcs/ft_atoi.c srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_putnbr.c
OBJS	= $(SRCS:.c=.o)
CFLAGS	= -Wall -Werror -Wextra
CC		= cc
NAME	= do-op
RM		= rm -f
HEAD	= includes

.c.o:
			$(CC) -I $(HEAD) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		 all clean fclean re