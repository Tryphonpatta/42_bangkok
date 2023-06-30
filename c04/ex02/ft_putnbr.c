/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:27:47 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/12 18:37:14 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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
	while (nb < d && d > 1)
		d /= 10;
	while (d > 1)
	{
		ft_putchar(nb / d + '0');
		nb %= d;
		d /= 10;
	}
	ft_putchar(nb + '0');
}

// #include <stdio.h>
// int	main(void)
// {
// 	ft_putnbr(10);
// }
