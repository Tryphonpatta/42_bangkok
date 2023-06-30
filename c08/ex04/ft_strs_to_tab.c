/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 17:34:59 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/20 17:35:07 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include "ft_stock_str.h"

void	str_cpy(char *des, char *src)
{
	while (*src)
	{
		*des = *src;
		des ++;
		src ++;
	}
	*des = '\0';
}

int	str_len(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i++;
	return (i);
}

char	*str_dup(char *a)
{
	char	*str;
	char	*b;

	str = (char *)malloc(str_len(a) + 1);
	if (!str)
		return (0);
	b = str;
	while (*a)
	{
		*str = *a;
		str ++;
		a ++;
	}
	*str = '\0';
	return (b);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*a;
	t_stock_str	*b;

	a = malloc(sizeof(t_stock_str) * (ac + 1));
	b = a;
	if (!b)
		return (0);
	i = 0;
	while (i < ac)
	{
		a[i].size = str_len(av[i]);
		a[i].str = av[i];
		a[i].copy = str_dup(av[i]);
		i++;
	}
	a[i].size = 0;
	a[i].str = 0;
	a[i].copy = 0;
	return (a);
}
