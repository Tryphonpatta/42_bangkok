/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:54:52 by rlikitap          #+#    #+#             */
/*   Updated: 2023/06/18 19:41:56 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "struct_index.h"

int		check(int n, int **a, int **board, struct s_index myindex);
void	print_board(int **b, int n);
int		is_finish(int **b, int n);
void	setmyindex(struct s_index myindex, int i, int j, int k);
void	setij(int *i, int *j, int si, int sj);
int		finish(int **board, int n);
void	moveij(int *i, int *j, int n);

int	solve(int n, int **a, int **board, struct s_index solvin)
{
	int				k;
	struct s_index	myindex;

	if (solvin.i == n - 1 && solvin.j == n)
		return (finish(board, n));
	moveij(&solvin.i, &solvin.j, n);
	k = 1;
	while (k <= n)
	{
		myindex.i = solvin.i;
		myindex.j = solvin.j;
		myindex.v = k;
		if (check(n, a, board, myindex))
		{
			board[solvin.i][solvin.j] = k;
			myindex.j ++;
			if (solve(n, a, board, myindex))
				return (1);
			myindex.j --;
			board[solvin.i][solvin.j] = -1;
		}
		k ++;
	}
	return (0);
}
