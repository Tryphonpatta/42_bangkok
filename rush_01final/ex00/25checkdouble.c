/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   25checkdouble.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:44:09 by rlikitap          #+#    #+#             */
/*   Updated: 2023/06/18 18:54:59 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "struct_index.h"

int	setback(int **b, int i, int j);

int	check_double_h(int n, int **board, struct s_index myindex)
{
	int		i;
	int		check[10];

	i = 0;
	while (i < 10)
	{	
		check[i] = 0;
		i ++;
	}
	i = 0;
	board[myindex.i][myindex.j] = myindex.v;
	while (i < n)
	{
		if (board[myindex.i][i] != -1)
		{
			if (check[board[myindex.i][i]])
				return (setback(board, myindex.i, myindex.j));
			check[board[myindex.i][i]] = 1;
		}
		i ++;
	}
	board[myindex.i][myindex.j] = -1;
	return (1);
}

int	check_double_v(int n, int **board, struct s_index myindex)
{
	int		i;
	int		check[10];

	i = 0;
	while (i < 10)
	{	
		check[i] = 0;
		i ++;
	}
	i = 0;
	board[myindex.i][myindex.j] = myindex.v;
	while (i < n)
	{
		if (board[i][myindex.j] != -1)
		{
			if (check[board[i][myindex.j]])
				return (setback(board, myindex.i, myindex.j));
			check[board[i][myindex.j]] = 1;
		}
		i ++;
	}
	board[myindex.i][myindex.j] = -1;
	return (1);
}
