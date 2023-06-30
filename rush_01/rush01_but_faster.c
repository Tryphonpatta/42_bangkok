/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_but_faster.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:10:13 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/18 17:45:21 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include <unistd.h>
#include<stdlib.h>
#include <time.h>
#include "struct_index.h"

void	setup_down(int n, int **a, int **board);
void	setdown_up(int n, int **a, int **board);
void	setleft_right(int n, int **a, int **board);
void	setright_left(int n, int **a, int **board);
void	set_f(int n, int **a, int **board);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	str_len(char *a)
{
	int	i;
	int count;

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
	int i;
	int j;

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
	printf("\n");
	return (a);
}

void	print_board(int **b, int n)
{
	int	i;
	int	j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			ft_putchar(b[i][j] + '0');
			if (j != n - 1)
				ft_putchar(' ');
			j ++;
		}
		if (i != n - 1)
			ft_putchar('\n');
		i ++;
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

int check_double_h(int n,int **board, struct index myindex)
{
	int		i;
	int		j;
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
			{
				board[myindex.i][myindex.j] = -1;
				return (1);
			}
			check[board[myindex.i][i]] = 1;
		}
		i ++;
	}
	board[myindex.i][myindex.j] = -1;
	return (0);
}

int check_double_v(int n,int **board, struct index myindex)
{
	int		i;
	int		j;
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
			{
				board[myindex.i][myindex.j] = -1;
				return (1);
			}
			check[board[i][myindex.j]] = 1;
		}
		i ++;
	}
	board[myindex.i][myindex.j] = -1;
	return (0);
}

int validu_d(int n, int **a, int **board, struct index myindex)
{
	int	i;
	int	max;
	int	s;
	int	status;

	status = 1;
	s = 0;
	i = 0;
	max = -1;
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
			{
				board[myindex.i][myindex.j] = -1;
				return (0);
			}
		}
		i++;
	}
	if ((a[0][myindex.j] != s && status))
	{
		board[myindex.i][myindex.j] = -1;
		return (0);
	}
	return (1);
}

int validd_u(int n, int **a, int **board, struct index myindex)
{
	int	i;
	int	max;
	int	s;
	int	status;

	s = 0;
	status = 1;
	i = 0;
	max = -1;
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
			{
				board[myindex.i][myindex.j] = -1;
				return (0);
			}
		}
		i++;
	}
	if (a[1][myindex.j] != s && status)
	{
		board[myindex.i][myindex.j] = -1;
		return (0);
	}
	return (1);
}

int validl_r(int n, int **a, int **board, struct index myindex)
{
	int	i;
	int	max;
	int	s;
	int	status;


	status = 1;
	s = 0;
	i = 0;
	max = -1;
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
			{
				board[myindex.i][myindex.j] = -1;
				return (0);
			}
		}
		i++;
	}
	if (a[2][myindex.i] != s && status)
	{
		board[myindex.i][myindex.j] = -1;
		return (0);
	}
	return (1);
}

int validr_l(int n, int **a, int **board, struct index myindex)
{
	int	i;
	int	max;
	int	s;
	int	status;

	status = 1;
	s = 0;
	i = 0;
	max = -1;
	while (i < n)
	{
		if (board[myindex.i][n - i - 1] == -1)
			status = 0;
		if (max < board[myindex.i][n - i - 1])
		{
			s += 1;
			max = board[myindex.i][n - i - 1];
			if (n - max + s + n < a[3][myindex.i])
			{
				board[myindex.i][myindex.j] = -1;
				return (0);
			}
		}
		i++;
	}
	if (a[3][myindex.i] != s && status)
	{
		board[myindex.i][myindex.j] = -1;
		return (0);
	}
	return (1);
}

int	check(int n, int **a, int **board, struct index myindex)
{
	if (board[myindex.i][myindex.j] != -1)
		return (1);
	if (check_double_h(n, board, myindex))
	{
		return (0);
	}
	if (check_double_v(n, board, myindex))
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
	return (1);
}

int	solve(int n, int **a, int **board, struct index solvin)
{
	int				i;
	int				j;
	int				k;
	struct index	myindex;

	i = solvin.i;
	j = solvin.j;
	if (i == n -1 && j == n)
	{
		print_board(board, n);
		return (1);
	}
	if (j >= n)
	{
		i ++;
		j = 0;
	}

	k = 1;
	while (k <= n)
	{
		myindex.i = i;
		myindex.j = j;
		myindex.v = k;
		if (check(n, a, board, myindex))
		{
			board[i][j] = k;
			myindex.j ++;
			if (solve(n, a, board, myindex))
				return (1);
			myindex.j --;
			board[i][j] = -1;
		}
		k ++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	n;
	int	i;
	int	j;
	int **m;
	int **board;
	struct index myindex;
	clock_t begin = clock();

	if (argc <= 1)
		return (0);
	n = str_len(argv[1]) / 4 ;
	m = t_input(argv[1],n);
	i = 0;
	// while (i < 4)
	// {
	// 	j = 0;
	// 	while (j < n)
	// 	{
	// 		printf("%d ",m[i][j]);
	// 		j ++;
	// 	}
	// 	printf("\n");
	// 	i ++;
	// }
	myindex.i = 0;
	myindex.j = 0;
	board = empty_board(n);
	set_f(n, m, board);
	// printf("solve\n");
	solve(n, m, board, myindex);
	clock_t end = clock();
	printf("\n%f",(double)(end - begin)/1000000);
}