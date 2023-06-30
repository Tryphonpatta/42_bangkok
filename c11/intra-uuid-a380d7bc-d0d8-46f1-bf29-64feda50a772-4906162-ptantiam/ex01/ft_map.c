/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 16:08:57 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/25 01:58:47 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

// int	f(int a)
// {
// 	return (a + 2);
// }

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*a;

	a = (int *)malloc(sizeof(int) * length);
	if (!a)
		return (0);
	i = 0;
	while (i < length)
	{
		a[i] = f(tab[i]);
		i ++;
	}
	return (a);
}

// int	main(void)
// {
// 	int t[3] = {0,1,2};
// 	int *a = ft_map(t,3,&f);
// }
