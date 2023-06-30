/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:35:51 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/09 02:52:46 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

int	flen(int n)
{
	int	co;

	co = 1;
	while (n > 9)
	{
		n = n / 10;
		co *= 10;
	}
	return (co);
}

void	ft_putnbr(int nb)
{
	int	len;
	int	ans;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	len = flen(nb);
	if (nb == 0)
	{
		write(1, "0", 1);
	}
	while (nb != 0)
	{
		ans = nb / len;
		ft_putchar (ans + 48);
		nb -= ans * len;
		len = len / 10;
	}
}
