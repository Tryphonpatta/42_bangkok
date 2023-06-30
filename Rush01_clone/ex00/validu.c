/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:47:31 by rlikitap          #+#    #+#             */
/*   Updated: 2023/06/18 18:10:02 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "struct_index.h"

int		setback(int **b, int i, int j);
int		setvar(int *s, int *status, int *max);

int	validu_d(int n, int **a, int **board, struct s_index myindex)
{
	int	i;
	int	max;
	int	s;
	int	status;

	setvar(&s, &status, &max);
	i = 0;
	board[myindex.i][myindex.j] = myindex.v;
	while (i < n)
	{
		if (board[i][myindex.j] == -1)
			status = 0;
		else if (max < board[i][myindex.j])
		{
			s += 1;
			max = board[i][myindex.j];
			if (n - max + s + i < a[0][myindex.j] || a[0][myindex.j] < s)
				return (setback(board, myindex.i, myindex.j));
		}
		i++;
	}
	if ((a[0][myindex.j] != s && status))
		return (setback(board, myindex.i, myindex.j));
	return (1);
}

int	validd_u(int n, int **a, int **board, struct s_index myindex)
{
	int	i;
	int	max;
	int	s;
	int	status;

	setvar(&s, &status, &max);
	i = 0;
	board[myindex.i][myindex.j] = myindex.v;
	while (i < n)
	{
		if (board[n - i -1][myindex.j] == -1)
			status = 0;
		else if (max < board[n - i - 1][myindex.j])
		{
			s += 1;
			max = board[n - i - 1][myindex.j];
			if (n - max + s + n < a[1][myindex.j])
				return (setback(board, myindex.i, myindex.j));
		}
		i++;
	}
	if (a[1][myindex.j] != s && status)
		return (setback(board, myindex.i, myindex.j));
	return (1);
}

int	validl_r(int n, int **a, int **board, struct s_index myindex)
{
	int	i;
	int	max;
	int	s;
	int	status;

	setvar(&s, &status, &max);
	i = 0;
	board[myindex.i][myindex.j] = myindex.v;
	while (i < n)
	{
		if (board[myindex.i][i] == -1)
			status = 0;
		if (max < board[myindex.i][i])
		{
			s += 1;
			max = board[myindex.i][i];
			if (n - max + s + i < a[2][myindex.i] || s > a[2][myindex.i])
				return (setback(board, myindex.i, myindex.j));
		}
		i++;
	}
	if (a[2][myindex.i] != s && status)
		return (setback(board, myindex.i, myindex.j));
	return (1);
}

int	validr_l(int n, int **a, int **board, struct s_index myindex)
{
	int	i;
	int	max;
	int	s;
	int	status;

	setvar(&s, &status, &max);
	i = 0;
	while (i < n)
	{
		if (board[myindex.i][n - i - 1] == -1)
			status = 0;
		if (max < board[myindex.i][n - i - 1])
		{
			s += 1;
			max = board[myindex.i][n - i - 1];
			if (n - max + s + n < a[3][myindex.i])
				return (setback(board, myindex.i, myindex.j));
		}
		i++;
	}
	if (a[3][myindex.i] != s && status)
		return (setback(board, myindex.i, myindex.j));
	return (1);
}
