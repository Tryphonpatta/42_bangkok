/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:29:16 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/28 17:56:13 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_h.h"
#include <unistd.h>

void	doop(int a, int b, int (*f)(int, int))
{
	int	c;

	c = f(a, b);
	ft_putnbr(c);
}

void	main_2(char **a)
{
	if (a[2][0] == '/')
		write(1, "Stop : division by zero", 23);
	else
		write(1, "Stop : modulo by zero", 21);
}

int	main(int i, char **a)
{
	int	c;
	int	b;

	if (i != 4)
		return (0);
	c = ft_atoi(a[1]);
	b = ft_atoi(a[3]);
	if (((a[2][0] == '/' || a[2][0] == '%') && a[2][1] == '\0') && b == 0)
		main_2(a);
	else if (a[2][0] == '+' && a[2][1] == '\0')
		doop(c, b, &ft_add);
	else if (a[2][0] == '-' && a[2][1] == '\0')
		doop(c, b, &ft_minus);
	else if (a[2][0] == '*' && a[2][1] == '\0')
		doop(c, b, &ft_multiply);
	else if (a[2][0] == '/' && a[2][1] == '\0')
		doop(c, b, &ft_divide);
	else if (a[2][0] == '%' && a[2][1] == '\0')
		doop(c, b, &ft_modulo);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}
