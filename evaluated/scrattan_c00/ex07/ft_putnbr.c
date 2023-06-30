/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:13:39 by scrattan          #+#    #+#             */
/*   Updated: 2023/06/09 13:37:27 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchr(char c)
{
	write(1, &c, 1);
}

int	ft_intlen_counter(int n)
{
	int	l;

	l = 1;
	while (n > 9)
	{
		l++;
		n /= 10;
	}
	return (l);
}

int	ft_ten_power_by_e(int e)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	while (i < e)
	{
		num *= 10;
		i++;
	}
	return (num);
}

void	ft_putnbr(int nb)
{	
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			ft_putchr('-');
			nb *= -1;
		}
		while (nb / 10 != 0)
		{
			ft_putchr(nb / ft_ten_power_by_e(ft_intlen_counter(nb) - 1) + '0');
			nb = nb % ft_ten_power_by_e(ft_intlen_counter(nb) - 1);
		}
		ft_putchr(nb + '0');
	}
}
