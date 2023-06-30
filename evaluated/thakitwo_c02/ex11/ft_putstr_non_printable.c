/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:21:36 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/09 18:56:59 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	change(int b)
{
	if (b < 10)
	{
		return (b + '0');
	}
	return (b - 10 + 'a');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	b;
	int	f;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
		{
			b = str[i] % 16;
			f = str[i] / 16;
			b = change(b);
			write(1, "\\", 1);
			ft_putchar(f + '0');
			ft_putchar(b);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}
