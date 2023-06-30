/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:20:12 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/23 14:03:10 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	print_str(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	print_num(int a)
{
	int	aa;

	if (a > 10)
		print_num(a / 10);
	aa = a % 10 + '0';
	write(1, &aa, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		print_str(par[i].str);
		print_num(par[i].size);
		write(1, "\n", 1);
		print_str(par[i].copy);
		i++;
	}
}
