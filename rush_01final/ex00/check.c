/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:53:22 by rlikitap          #+#    #+#             */
/*   Updated: 2023/06/18 19:40:22 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "struct_index.h"

int	check_double_h(int n, int **board, struct s_index myindex);
int	check_double_v(int n, int **board, struct s_index myindex);
int	validu_d(int n, int **a, int **board, struct s_index myindex);
int	validd_u(int n, int **a, int **board, struct s_index myindex);
int	validl_r(int n, int **a, int **board, struct s_index myindex);
int	validr_l(int n, int **a, int **board, struct s_index myindex);

int	check(int n, int **a, int **board, struct s_index myindex)
{
	if (!check_double_h(n, board, myindex))
		return (0);
	if (!check_double_v(n, board, myindex))
	{
		return (0);
	}
	if (!validu_d(n, a, board, myindex))
	{	
		return (0);
	}
	if (!validd_u(n, a, board, myindex))
	{	
		return (0);
	}
	if (!validl_r(n, a, board, myindex))
	{	
		return (0);
	}
	if (!validr_l(n, a, board, myindex))
	{	
		return (0);
	}
	if (!(board[myindex.i][myindex.j] != -1))
		return (0);
	return (1);
}
