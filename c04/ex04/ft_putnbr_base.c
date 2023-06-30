/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:09:07 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/15 01:43:06 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	str_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i ++;
	}
	return (i);
}

int	checkbase(char *b)
{
	int	i;
	int	j;

	i = 0 ;
	while (i < str_len(b))
	{
		j = i + 1;
		if (b[i] == '+' || b[i] == '-')
		{
			return (0);
		}
		while (j < str_len(b))
		{
			if (b[i] == b[j])
				return (0);
			j ++;
		}
		i ++;
	}
	return (1);
}

void	rebase(long long int nbr, char *base)
{
	if (nbr == 0)
	{
		return ;
	}
	if (nbr < 0)
	{
		nbr *= -1;
		ft_putchar('-');
	}
	rebase(nbr / str_len(base), base);
	ft_putchar(base[nbr % str_len(base)]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long int	i ;

	i = nbr;
	if (str_len(base) <= 1)
	{
		return ;
	}
	if (!checkbase(base))
	{
		return ;
	}
	if (nbr == 0)
	{
		write(1, "0", 1);
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		i *= -1;
	}
	rebase(i, base);
}

// int main (void)
// {
// 	ft_putnbr_base(-2147483647,"poneyvif");
// }