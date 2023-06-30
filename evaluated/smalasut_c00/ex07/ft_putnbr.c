/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 10:38:59 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/09 20:42:00 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putchar(int nb)
{
	int	a;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		if (nb > 9)
		{	
			ft_putchar(nb / 10);
			nb = (nb % 10) + '0';
			write(1, &nb, 1);
		}
		else
		{
			nb = nb + '0';
			write(1, &nb, 1);
		}
	}
}

/*int	main(void)
{
	int	a;

	scanf("%d", &a);
	ft_putchar(a);
}*/
