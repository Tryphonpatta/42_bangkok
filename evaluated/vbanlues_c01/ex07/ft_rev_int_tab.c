/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 21:39:03 by vbanlues          #+#    #+#             */
/*   Updated: 2023/06/11 14:02:55 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	n;
	int	x;

	i = 0;
	n = size / 2;
	while (i < n)
	{
		x = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = x;
		i++;
	}
}
