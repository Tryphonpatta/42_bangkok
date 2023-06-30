/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <wongamph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 12:27:32 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/27 13:51:14 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	begin;
	int	*res;

	res = malloc(sizeof(int) * length);
	if (!res)
		return (NULL);
	begin = -1;
	while (++begin < length)
		res[begin] = f(tab[begin]);
	return (res);
}

// #include <stdio.h>
// int power(int n)
// {
//     return (n*n);
// }
// int main()
// {
//     int tab[5] = {1,2,3,4,5};
//     int *tmp = ft_map(tab,5,&power);

//     for(int i =0;i<5;i++)
//         printf("%d",tmp[i]);
// }