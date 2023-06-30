/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:39:11 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/13 14:22:21 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check(char *b)
{	
	int	i;
	int	j;

	if (ft_strlen(b) < 2)
	{
		return (1);
	}
	i = 0;
	while (b[i] != '\0')
	{
		j = i + 1;
		while (b[j] != '\0')
		{
			if (b[i] == b[j])
			{
				return (1);
			}
			j++;
		}
		if (b[i] == '+' || b[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	int_base(long long int nbr, char *base)
{
	if (nbr < ft_strlen(base))
	{
		ft_putchar(base[nbr]);
		return ;
	}
	int_base(nbr / ft_strlen(base), base);
	int_base(nbr % ft_strlen(base), base);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	a;

	if (check(base))
	{
		return ;
	}
	a = nbr;
	if (a < 0)
	{
		a *= -1;
		write(1, "-", 1);
	}
	int_base(a, base);
}

// #include <stdio.h>
// int	main(void)
// {
// 	ft_putnbr_base(124,"0123456789abcdef");
// }
