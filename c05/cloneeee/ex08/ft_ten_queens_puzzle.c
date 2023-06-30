/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 00:30:24 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/13 15:31:22 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
// #include<stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	printboard(int b[10][10])
{
	int	i;
	int	j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (b[j][i])
			{
				ft_putchar(j + '0');
				break ;
			}
			j ++;
		}
		i ++;
	}
	ft_putchar('\n');
}

int	issafe(int b[10][10], int row, int col)
{
	int	i;

	i = 0;
	while (i < col)
	{	
		if (b[row][i])
			return (0);
		i++;
	}
	i = 0;
	while (row - i >= 0 && col - i >= 0)
	{
		if (b[row - i][col - i])
			return (0);
		i++;
	}
	i = 0;
	while (row + i < 10 && col - i >= 0)
	{
		if (b[row + i][col - i])
			return (0);
		i++;
	}
	return (1);
}

int	solve(int col, int b[10][10], int *ans)
{
	int	i;

	i = 0;
	if (col >= 10)
	{	
		printboard(b);
		*ans += 1;
	}
	while (i < 10)
	{
		if (issafe(b, i, col))
		{
			b[i][col] = 1;
			if (solve(col + 1, b, ans))
			{	
				return (1);
			}
			b[i][col] = 0;
		}
		i++;
	}
	return (0);
}

int	ft_ten_queens_puzzle(void)
{
	int	a[10][10];
	int	i;
	int	j;
	int	ans;

	ans = 0;
	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			a[i][j] = 0;
			j ++;
		}
		i++;
	}
	solve(0, a, &ans);
	return (ans);
}

// int main(void)
// {
// 	ft_ten_queens_puzzle();
// }