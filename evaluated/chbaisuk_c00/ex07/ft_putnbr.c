/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chbaisuk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:40:16 by chbaisuk          #+#    #+#             */
/*   Updated: 2023/06/12 22:19:34 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		nb = nb % 10;
	}
	if (nb <= -10)
	{
		ft_putnbr(nb / -10);
		nb = nb % -10;
	}
	if (nb < 10)
	{
		if (nb < 0)
		{
			nb = -nb;
		}
		nb = nb + '0';
		write(1, &nb, 1);
	}
}