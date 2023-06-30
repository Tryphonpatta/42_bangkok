/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 01:24:46 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/15 10:45:43 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	print(int **a, int *c)
{
	int	i;
	int	j;
	int	d;
	
	i = 0;
	j = 0;
	d = 0;
	while(j < 10)
	{
		while (a[i][j] ==  0)
			i++;
		d = i + 1 + '0';
		write(1, &d, 1);
		*c++;
		j++;
	}
	write(1, "\n", 1);
}

int	check(int **a, int *i, int *j)
{
	int	x;
	int	y;

	x = *i;
	y = *j;
	while (x >= 0 && y >= 0)
	{
		if (a[x--][y--] == 1)
			return (0);
	}
	while (x >= 0 && y >= 0)
	{
		if (a[x][y--] == 1)
			return (0);
	}
	while (x >= 0 && y >= 0)
	{
		if (a[x++][y--] == 1)
			return (0);
	}
	return (1);
}

void	ft_rec(int **a, int *i, int *j, int *c)
{
	int	x;

	if (check(a, i, j) == 1)
	{
		a[*i][*j] = 1;
		if (*j == 9)
		{
			print(a, c);
		}
	}
	else if (*i + 1 <= 9)
		ft_rec(a, i + 1, j, c);
	else if (*i == 9)
	{
		a[*i][*j] = 0;
		*j += 1;
		x = 0;
		while (a[x][*j - 1] == 0)
			x++;
		*i = x + 1;
		*j -= 1;
		ft_rec(a, i, j, c);
	}

}

int	ft_ten_queens_puzzle(void)
{
	int	a[10][10];
	//int	b[10];
	int	i;
	int	j;
	int	c;

	i = 0;
	j = 0;
	c = 0;
	while (i < 10)
	{
		while (j < 10)
		{
			a[i][j] = 0;
			j++;
		}
		i++;
	}
	ft_rec(a, &i, &j, &c);
	return (c);
}

int	main()
{
	ft_ten_queens_puzzle();
}
