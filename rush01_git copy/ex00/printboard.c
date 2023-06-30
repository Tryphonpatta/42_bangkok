/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printboard.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:40:12 by rlikitap          #+#    #+#             */
/*   Updated: 2023/06/18 19:17:15 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include "struct_index.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
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
		ft_putchar('\n');
		i ++;
	}
}
