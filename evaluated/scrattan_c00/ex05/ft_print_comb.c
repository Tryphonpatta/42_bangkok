/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:33:41 by scrattan          #+#    #+#             */
/*   Updated: 2023/06/09 11:28:58 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	writechar(char a, char b, char c)
{
	if (c > b && b > a)
	{
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, &c, 1);
		if (a != '7' || b != '8' || c != '9')
		{
			write(1, ",", 1);
			write(1, " ", 1);
		}
	}
}

void	ft_print_comb(void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0';
	while (d1 <= '9')
	{
		d2 = '0';
		while (d2 <= '9')
		{
			d3 = '0';
			while (d3 <= '9')
			{
				writechar (d1, d2, d3);
				d3++;
			}
			d2++;
		}
		d1++;
	}
}
