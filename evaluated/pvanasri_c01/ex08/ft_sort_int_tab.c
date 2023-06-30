/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:11:57 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/13 20:16:34 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	max;
	int	temp;

	i = 0;
	while (i <= size)
	{
		j = 0;
		max = 2147483647;
		while (j < size - i)
		{
			if (tab[j + i] <= max)
			{
				max = tab[j + i];
				temp = tab[j + i];
				tab[j + i] = tab[0 + i];
				tab[0 + i] = temp;
			}
			++j;
		}
		++i;
	}
}

// int main(void)
// {
//     int array[5] = {4,2,5,1,3};

//     ft_sort_int_tab(array, 5);
//
//     int i = 0;
//     while (i < 5)
//     {
//         printf("%i", array[i]);
//         ++i;
//     }
//     return 0;
// }
