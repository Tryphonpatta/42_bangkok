/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:32:04 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/10 20:03:12 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 1;
	while (i < size)
	{
		j = 0;
		while (j < size - i)
		{
			if (*tab > *(tab + 1))
			{
				tmp = *tab;
				*tab = *(tab + 1);
				*(tab + 1) = tmp;
			}
			tab++;
			j++;
		}
		tab -= (size - i);
		i++;
	}
}

/*int	main(void)
{
	int	a[] = {5, 4, 1, 2, 1};
	int	*t;
	int	i = 0;

	t = a;
	ft_sort_int_tab(t, 5);
	while(i < 5)
	{
		printf("%d", a[i]);
		i++;
	}
}*/
