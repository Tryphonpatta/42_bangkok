/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 23:16:01 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/09 20:41:38 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	p(int a, int b, int c, int d)
{
	d = b + 1;
	while (c <= '9')
	{
		while (d <= '9')
		{
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, " ", 1);
			write(1, &c, 1);
			write(1, &d, 1);
			write(1, ", ", 2);
			d++;
		}
		c++;
		d = '0';
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			if (a == '9' && b == '8')
			{
				break ;
			}
			p (a, b, c, d);
			d = b++;
		}
		c = a++;
		b = '0';
	}
	write(1, "98 99", 5);
}

/*int	main(void)
{
	ft_print_comb2();
}*/
