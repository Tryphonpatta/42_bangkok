/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 19:47:09 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/18 19:07:27 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	setup_down(int n, int **a, int **board)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (a[0][i] == 1)
		{
			board[0][i] = n;
		}
		i ++;
	}
}

void	setdown_up(int n, int **a, int **board)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (a[1][i] == 1)
		{
			board[n - 1][i] = n;
		}
		i ++;
	}
}

void	setleft_right(int n, int **a, int **board)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (a[2][i] == 1)
		{
			board[i][0] = n;
		}
		i ++;
	}
}

void	setright_left(int n, int **a, int **board)
{
	int	i;

	i = 0;
	while (i < n)
	{
		if (a[3][i] == 1)
		{
			board[i][n - 1] = n;
		}
		i ++;
	}
}

void	set_f(int n, int **a, int **board)
{
	setup_down(n, a, board);
	setdown_up(n, a, board);
	setleft_right(n, a, board);
	setright_left(n, a, board);
}
