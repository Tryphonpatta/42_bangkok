/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 21:08:01 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/08 22:25:53 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	loopnn(char bf, char bb, char startf, char startb)
{
	while (startf != '9' || startb != '9')
	{
		if (startb > '9')
		{
			startf++;
			startb = '0';
		}
		write(1, &bf, 1);
		write(1, &bb, 1);
		write(1, " ", 1);
		write(1, &startf, 1);
		write(1, &startb, 1);
		write(1, ", ", 2);
		startb++;
	}
	write(1, &bf, 1);
	write(1, &bb, 1);
	write(1, " 99", 3);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = '0';
	b = '0';
	while (a != '9' || b != '8')
	{
		if (b > '9')
		{
			a++;
			b = '0';
		}
		loopnn (a, b, a, b + 1);
		write(1, ", ", 2);
		b++;
	}
	write(1, "98 99", 5);
}
