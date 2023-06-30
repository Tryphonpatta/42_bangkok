/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:57:20 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/15 04:52:04 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
// #include<stdio.h>

int	*ft_range(int min, int max)
{
	int	*a;
	int	*s;
	int	i;

	a = (int *)malloc((max - min) * 4);
	s = a;
	if (min >= max)
	{
		return (0);
	}
	i = min;
	while (i < max)
	{
		*a = i;
		a ++;
		i ++;
	}
	return (s);
}

// int	main(void)
// {
// 	int *a = ft_range(0,0);
// 	for(int i=0; i<1;i++)
// 	{
// 		printf("%d\n",a[i]);
// 	}
// }