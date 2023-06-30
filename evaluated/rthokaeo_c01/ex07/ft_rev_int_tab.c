/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthokaeo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:20:18 by rthokaeo          #+#    #+#             */
/*   Updated: 2023/06/11 15:39:27 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	tmp;
	int	last;

	start = 0;
	while (start < size)
	{
		tmp = tab[start];
		tab[start] = tab[--size];
		tab[size] = tmp;
		start++;
	}
}

int	main(void)
{
	int array[11] = {12,11,233,321,432,5,6,3,2,1,0};
	ft_rev_int_tab(array,11);
	
	for (int i = 0;i < 11; i++)
	{	
		printf("%d ",array[i]);
	}
	return 0;
}
