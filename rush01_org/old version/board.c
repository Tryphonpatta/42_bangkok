/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   board.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 18:41:10 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/17 18:42:00 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	str_len(char *a)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (a[i])
	{
		if (a[i] != ' ')
			count++;
		i ++;
	}
	return (count);
}

int	**empty_board(int n)
{
	int	i;
	int	j;
	int	**b;

	b = (int **)malloc(sizeof(int *) * n);
	i = 0;
	while (i < n)
	{
		b[i] = (int *)malloc(sizeof(int) * n);
		i ++;
	}
	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			b[i][j] = -1;
			j++;
		}
		i ++;
	}
	return (b);
}

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
	while (i < n)
	{
		a[i] = (int *)malloc(sizeof(int) * l / 4 + 1);
		i ++;
	}
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
