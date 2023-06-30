/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 14:35:30 by scrattan          #+#    #+#             */
/*   Updated: 2023/06/10 17:32:35 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	lastindex;
	int	temp;
	int	startindex;

	lastindex = size - 1;
	startindex = 0;
	while (startindex < lastindex)
	{
		temp = tab[lastindex];
		tab[lastindex] = tab[startindex];
		tab[startindex] = temp;
		startindex++;
		lastindex--;
	}
}
