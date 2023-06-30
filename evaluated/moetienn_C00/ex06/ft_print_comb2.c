/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:09:41 by moetienn          #+#    #+#             */
/*   Updated: 2023/06/08 11:20:11 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char d)
{
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = 0;
		while (b <= 99)
		{
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			ft_putchar(32);
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			if (a !=  98 || b != 99)
			{
				ft_putchar(44);
				ft_putchar(32);
			}
			b++;
		}
		a++;
	}
}

int	main()
{
	ft_print_comb2();
	return(0);
}
