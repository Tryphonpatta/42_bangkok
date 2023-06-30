/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 22:14:18 by vbanlues          #+#    #+#             */
/*   Updated: 2023/06/11 14:03:31 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	x;

	i = 0;
	j = 1;
	while (i < size - 1)
	{
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				x = tab[i];
				tab[i] = tab[j];
				tab[j] = x;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}
