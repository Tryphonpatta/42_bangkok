/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 04:39:48 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/09 04:59:48 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				temp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = temp;
			}
			j++;
		}
		i++;
	}
}

/*
int	main(void)
{
	int a[5] = {4, 3, 2, 1, 0};
	ft_sort_int_tab(a, 5);
	for(int i=0;i<5;i++){ 
		printf("%d ",a[i]);
	}
}
*/
