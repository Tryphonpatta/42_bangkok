NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I includes

SRCS_DIR = srcs
OBJS_DIR = $(SRCS_DIR)
SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = $(SRCS:%.c=$(OBJS_DIR)/%.o)

.PHONY: all clean fclean re

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@ $(INCLUDES)

$(NAME): $(OBJS)
	ar -rc $@ $^

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
