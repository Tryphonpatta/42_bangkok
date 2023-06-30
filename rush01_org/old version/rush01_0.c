/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_0.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:10:13 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/17 19:00:11 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int str_len(char *a);
int	**empty_board(int n);
int	**t_input(char *args,int n);

void print_board(int **b, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			printf("%d\t",b[i][j]);
			j ++;
		}
		i ++;
		printf("\n");
	}
	printf("\n\n");
}

int	is_finish(int **b, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (b[i][j] == -1)
				return (0);
			j ++;
		}
		i ++;
	}
	return (1);
}

//set up to down
void	setup_down(int n, int **a, int **board)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		if (a[0][i] == n)
		{
			j = 0;
			while (j < n)
			{
				board[j][i] = j + 1;
				j++;
			}
		}
		else if (a[0][i] == 1)
		{
			board[0][i] = n;
		}
		i ++;
	}
}

//set down to up
void	setdown_up(int n, int **a, int **board)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		if (a[1][i] == n)
		{
			j = 0;
			while (j < n)
			{
				board[n - j - 1][i] = j + 1;
				j++;
			}
		}
		else if (a[1][i] == n)
		{
			board[n - 1][i] = n;
		}
		i ++;
	}
}

//set left to right
void	setleft_right(int n, int **a, int **board)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		if (a[2][i] == n)
		{
			j = 0;
			while (j < n)
			{
				board[i][j] = j + 1;
				j++;
			}
		}
		else if (a[2][i] == 1)
		{
			board[i][0] = n;
		}
		i ++;
	}
}

//set right to left
void	setright_left(int n, int **a, int **board)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		if (a[3][i] == n)
		{
			j = 0;
			while (j < n)
			{
				board[i][n - 1 - j] = j + 1;
				j++;
			}
		}
		else if (a[3][i] == 1)
		{
			board[i][n - 1] = n;
		}
		i ++;
	}
}

//set board for 1 and n size for first time
void	set_f(int n, int **a, int **board)
{
	setup_down(n, a, board);
	setdown_up(n, a, board);
	setleft_right(n, a, board);
	setright_left(n, a, board);
}

int check_double_h(int n,int **board)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			k = j + 1;
			if (board[i][j] == -1)
			{
				j ++;
				continue ;
			}
			while (k < n)
			{
				if (board[i][j] == board[i][k])
					return (1);
				k ++;
			}
			j ++;
		}
		i ++;
	}
	return (0);
}

int check_double_v(int n,int **board)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			k = j + 1;
			if (board[j][i] == -1)
			{
				j ++;
				continue ;
			}
			while (k < n)
			{
				if (board[j][i] == board[k][i])
					return (1);
				k ++;
			}
			j ++;
		}
		i ++;
	}
	return (0);
}

int validu_d(int n, int **a, int **board)
{
	int	i;
	int	j;
	int	k;
	int	s;
	int	max;

	i = 0;
	// print_board(board,n);
	while (i < n)
	{
		s = 1;
		j = 1;
		k = 1;
		max = board[0][i];
		while (j < n)
		{
			if (board[j][i] == -1)
			{
				k = 0;
				break ;
			}
			if (board[j][i] > max)
			{
				max = board[j][i];
				s ++;
			}
			j ++;
		}
		if (s != a[0][i] && k)
		{
			return (0);
		}
		i ++;
	}
	return (1);
}

int validd_u(int n, int **a, int **board)
{
	int	i;
	int	j;
	int	k;
	int	s;
	int	max;

	i = 0;
	while (i < n)
	{
		s = 1;
		j = 1;
		k = 1;
		max = board[n-1][i];
		while (j < n)
		{
			if (board[n - j - 1][i] == -1)
			{
				k = 0;
				break ;
			}
			if (board[n - j - 1][i] > max)
			{
				max = board[n - j - 1][i];
				s ++;
			}
			j ++;
		}
		if (s != a[1][i] && k)
		{
			return (0);
		}
		i ++;
	}
	return (1);
}

int validl_r(int n, int **a, int **board)
{
	int	i;
	int	j;
	int	k;
	int	s;
	int	max;

	i = 0;
	while (i < n)
	{
		s = 1;
		j = 1;
		k = 1;
		max = board[i][0];
		while (j < n)
		{
			if (board[i][j] == -1)
			{
				k = 0;
				break ;
			}
			if (board[i][j] > max)
			{
				max = board[i][j];
				s ++;
			}
			j ++;
		}
		if (s != a[2][i] && k)
		{
			return (0);
		}
		i ++;
	}
	return (1);
}

int validr_l(int n, int **a, int **board)
{
	int	i;
	int	j;
	int	k;
	int	s;
	int	max;

	i = 0;
	while (i < n)
	{
		s = 1;
		j = 1;
		k = 1;
		max = board[i][n-1];
		while (j < n)
		{
			if (board[i][n - j - 1] == -1)
			{
				k = 0;
				break ;
			}
			if (board[i][n - j - 1] > max)
			{
				max = board[i][n - j - 1];
				s ++;
			}
			j ++;
		}
		if (s != a[3][i] && k)
		{
			// printf("vali : %d --> %d\n",s,a[1][i]);
			return (0);
		}
		i ++;
	}
	return (1);
}

int	check(int n, int **a, int **board)
{
	if (check_double_h(n, board))
	{
		return (0);
	}
	if (check_double_v(n, board))
	{
		return (0);
	}
	if (!validu_d(n, a, board))
	{	
		return (0);
	}
	if (!validd_u(n, a, board))
	{	
		return (0);
	}
	if (!validl_r(n, a, board))
	{	
		return (0);
	}
	if (!validr_l(n, a, board))
	{	
		return (0);
	}
	return (1);
}

int	solve(int n, int **a, int **board)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (is_finish(board, n))
	{
		print_board(board, n);
		return (1);
	}
	print_board(board, n);
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			if (board[i][j] == -1)
			{
				k = 1;
				while (k <= n)
				{
					board[i][j] = k;
					if (check(n, a, board))
					{
						if (solve(n, a, board))
							return (1);
					}
					else
						board[i][j] = -1;
					k ++;
				}
			}
			j ++;
		}
		i ++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;
	int	**m;
	int	**board;

	if (argc <= 1)
		return (0);
	n = str_len(argv[1]) / 4 ;
	m = t_input(argv[1], n);
	i = 0;
	board = empty_board(n);
	set_f(n, m, board);
	solve(n, m, board);
}