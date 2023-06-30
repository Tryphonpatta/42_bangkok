/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:13:35 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/08 23:51:39 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	d;

	d = 1000000000;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	while (d > nb && d > 1)
	{
		d /= 10;
	}
	while (d != 1)
	{
		ft_putchar(nb / d + 48);
		nb %= d;
		d = d / 10;
	}
	ft_putchar(nb + 48);
}

// int	main(void)
// {
//  	ft_putnbr(0);
// }
