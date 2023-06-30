/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <wongamph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:43:16 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/28 17:46:37 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	less;
	int	more;

	i = 0;
	less = 1;
	more = 1;
	while (++i < length)
	{
		if (f(tab[i - 1], tab[i]) >= 0)
			less++;
		if (f(tab[i - 1], tab[i]) <= 0)
			more++;
	}
	if (more == i || less == i)
		return (1);
	return (0);
}

// int intcmp(int n1, int n2){
// 	if (n1 > n2)
// 		return (1);
// 	if (n1 ==n2)
// 		return (0);
// 	return -1;
// }
// int main()
// {
//     int tab[10] = {5,4,3,3,2,2,1};
//     printf("%d",ft_is_sort(tab,10,&intcmp));
// }