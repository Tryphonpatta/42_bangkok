#!/bin/bash
FLAGS='-Wall -Wextra -Werror'
cc ${FLAGS} -c *.c
ar -rc libft.a *.o
rm -rf *.o