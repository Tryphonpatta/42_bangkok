NAME    = libft.a
SOURCES = srcs/ft_putchar.c \
	  srcs/ft_putstr.c \
	  srcs/ft_strlen.c \
	  srcs/ft_strcmp.c \
	  srcs/ft_swap.c
OBJECTS = ${SOURCES:.c=.o}
INCS    = includes
LIBC    = ar rc
LIBR    = ranlib
CC      = cc
RM      = rm -f
CFLAGS  = -Wall -Wextra -Werror

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${INCS}
${NAME}: ${OBJECTS}
	${LIBC} ${NAME} ${OBJECTS}
	${LIBR} ${NAME}
all: ${NAME}
clean:
	${RM} ${OBJECTS}
fclean: clean
	${RM} ${NAME}
re: fclean all
