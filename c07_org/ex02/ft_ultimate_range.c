/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:13:18 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/15 04:52:14 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	index;
	int	*a;

	index = 0;
	i = min;
	if (min >= max)
	{
		range[0] = 0;
		return (0);
	}
	a = (int *)malloc((max - min) * 4);
	*range = a;
	while (i < max)
	{
		range[0][index] = i;
		index ++;
		i ++;
	}
	return (max - min);
}
