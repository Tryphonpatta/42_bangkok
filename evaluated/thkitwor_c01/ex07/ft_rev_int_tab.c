/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 04:17:07 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/09 04:38:56 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	temp;

	c = 0;
	while (size - 1 > c)
	{
		size--;
		temp = *(tab + size);
		*(tab + size) = *(tab + c);
		*(tab + c) = temp;
		c++;
	}
}

/*
int	main(void)
{
	int a[5] = {0, 1, 2, 3, 4};
	ft_rev_int_tab(a, 5);
	for(int i=0;i<5;i++){ 
		printf("%d ",a[i]);
	}
}
*/
