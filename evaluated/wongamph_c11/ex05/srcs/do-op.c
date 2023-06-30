/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <wongamph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:42:30 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/29 14:31:16 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	check_op(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	if (i != 1)
		return (0);
	if (*str == '+' || *str == '-' || *str == '*'
		|| *str == '/' || *str == '%')
		return (1);
	return (0);
}

void	do_op(int value1, char op, int value2)
{
	if (value2 == 0 && (op == '/' || op == '%'))
	{
		if (op == '/')
			ft_putstr("Stop : division by zero\n");
		else if (op == '%')
			ft_putstr("Stop : modulo by zero\n");
		return ;
	}
	if (op == '+')
		ft_putnbr(value1 + value2);
	else if (op == '-')
		ft_putnbr(value1 - value2);
	else if (op == '*')
		ft_putnbr(value1 * value2);
	else if (op == '/')
		ft_putnbr(value1 / value2);
	else
		ft_putnbr(value1 % value2);
	ft_putchar('\n');
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if (!check_op(argv[2]))
	{
		write(1, "0\n", 2);
		return (0);
	}
	else
		do_op(ft_atoi(argv[1]), *argv[2], ft_atoi(argv[3]));
}
