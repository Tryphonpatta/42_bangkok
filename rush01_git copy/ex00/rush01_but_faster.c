/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_but_faster.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 10:10:13 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/18 19:41:40 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "struct_index.h"
#include<unistd.h>

int		solve(int n, int **a, int **board, struct s_index myindex);
int		check(int n, int **a, int **board, struct s_index myindex);
int		validr_l(int n, int **a, int **board, struct s_index myindex);
int		validl_r(int n, int **a, int **board, struct s_index myindex);
int		validd_u(int n, int **a, int **board, struct s_index myindex);
int		validu_d(int n, int **a, int **board, struct s_index myindex);
int		check_double_v(int n, int **board, struct s_index myindex);
int		check_double_h(int n, int **board, struct s_index myindex);
int		is_finish(int **b, int n);
void	print_board(int **b, int n);
int		**t_input(char *args, int n);
int		**empty_board(int n);
int		str_len(char *a);
void	setup_down(int n, int **a, int **board);
void	setdown_up(int n, int **a, int **board);
void	setleft_right(int n, int **a, int **board);
void	setright_left(int n, int **a, int **board);
void	set_f(int n, int **a, int **board);

int	main(int argc, char **argv)
{
	int				n;
	int				**m;
	int				**board;
	struct s_index	myindex;

	if (argc <= 1)
		return (0);
	n = str_len(argv[1]) / 4 ;
	m = t_input(argv[1], n);
	myindex.i = 0;
	myindex.j = 0;
	board = empty_board(n);
	set_f(n, m, board);
	if (solve(n, m, board, myindex))
	{
		return (1);
	}
	else
		write(1, "Error\n", 6);
}
