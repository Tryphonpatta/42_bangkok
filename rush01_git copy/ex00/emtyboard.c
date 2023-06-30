/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   emtyboard.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlikitap <rlikitap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 20:30:19 by rlikitap          #+#    #+#             */
/*   Updated: 2023/06/17 20:32:49 by rlikitap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
#include "struct_index.h"

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
