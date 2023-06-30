/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   25t_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:36:31 by rlikitap          #+#    #+#             */
/*   Updated: 2023/06/18 19:09:22 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "struct_index.h"

int	str_len(char *a);

int	**t_input(char *args, int n)
{
	int	l;
	int	**a;
	int	i;
	int	j;

	i = 0;
	j = 0;
	l = str_len(args);
	a = (int **)malloc(sizeof(int *) * n * 4);
	while (i ++ < n)
		a[i - 1] = (int *)malloc(sizeof(int) * l / 4 + 1);
	i = 0;
	while (*args)
	{
		if (*args != ' ')
		{
			a[i / n][i % n] = *args - '0';
			i ++;
		}
		args ++;
	}
	return (a);
}
