/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 09:53:27 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/15 10:59:08 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*a;
	int	co;

	co = 0;
	i = min;
	if (min >= max)
		return (0);
	a = (int *)malloc(sizeof(int) * (max - min));
	if (a == 0)
		return (0);
	while (i < max)
	{
		a[co] = i;
		i++;
		co++;
	}
	return (a);
}
