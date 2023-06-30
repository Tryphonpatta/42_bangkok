/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scrattan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:35:38 by scrattan          #+#    #+#             */
/*   Updated: 2023/06/11 18:17:15 by scrattan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
			j++;
		}
		i++;
	}
}	
