/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:09:34 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/14 17:33:46 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	checkqueen(int pos, int col, int board[10][10])
{
	int	i;

	i = 0;
	while (col - i >= 0 && col - i < 10)
	{
		if (board[pos][col - i] == 1)
			return (0);
		i++;
	}
	i = 0;
	while (col - i >= 0 && pos - i >= 0)
	{
		if (board[pos - i][col - i] == 1)
			return (0);
		i++;
	}
	i = 0;
	while (col - i >= 0 && pos + i < 10)
	{
		if (board[pos + i][col - i] == 1)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void	printboard(int board[10][10])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			if (board[j][i] == 1)
			{
				ft_putchar(j + '0');
				break ;
			}
			j++;
		}
		i++;
		j = 0;
	}
	ft_putchar('\n');
}

int	solve(int board[10][10], int col, int *ans)
{
	int	pos;

	pos = 0;
	if (col >= 10)
	{
		printboard(board);
		*ans += 1;
		return (0);
	}
	while (pos < 10)
	{
		if (checkqueen(pos, col, board))
		{
			board[pos][col] = 1;
			if (solve(board, col + 1, ans))
				return (1);
			board[pos][col] = 0;
		}
		pos++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	i;
	int	board[10][10];
	int	j;
	int	ans;

	i = 0;
	j = 0;
	ans = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
		j = 0;
	}
	solve(board, 0, &ans);
	return (ans);
}
// #include<stdio.h>
// int main (void)
// {
// 	printf("%d", ft_ten_queens_puzzle());
// }
