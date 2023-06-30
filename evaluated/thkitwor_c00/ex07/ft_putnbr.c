/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:15:30 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/08 23:09:23 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int	c;

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
	c = 1000000000;
	while (c > nb && c > 1)
	{
		c /= 10;
	}
	while (c != 0)
	{
		ft_putchar(nb / c + '0');
		nb %= c;
		c /= 10;
	}	
}

// int	main(void)
// {
// 	ft_putnbr(-1);
// }
