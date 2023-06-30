/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 09:57:32 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/24 04:22:07 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	make(t_stock_str *a, char *str, int i)
{
	int	j;

	a[i].size = ft_strlen(str);
	a[i].copy = (char *)malloc(sizeof(char) * (a[i].size + 1));
	if (!a[i].copy)
		return ;
	j = 0;
	a[i].str = str;
	while (str[j] != '\0')
	{
		a[i].copy[j] = str[j];
		j++;
	}
	a[i].copy[j] = '\0';
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*a;

	i = 0;
	a = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!a)
		return (0);
	while (i < ac)
	{
		make(a, av[i], i);
		i++;
	}
	a[i].str = 0;
	return (a);
}
