/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:54:11 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/11 23:28:30 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	hex(int n)
{
	write(1, "\\", 1);
	if (n / 16 > 9)
	{
		ft_putchar(n / 16 - 10 + 'a');
	}
	else
	{
		ft_putchar(n / 16 + '0');
	}
	if (n % 16 > 9)
	{
		ft_putchar(n % 16 - 10 + 'a');
	}
	else
	{
		ft_putchar(n % 16 + '0');
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (*(str))
	{
		if (*str < 32 || *str > 126)
		{
			hex(*str);
		}
		else
		{
			ft_putchar(*str);
		}
		str++;
	}
}

// int	main(void)
// {
// 	ft_putstr_non_printable("Coucou tu vas bie\t\v\0n");
// }
