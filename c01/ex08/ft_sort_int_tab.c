/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 04:46:45 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/09 05:02:08 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	t;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				t = tab[i];
				tab[i] = tab[j];
				tab[j] = t;
			}
			j ++;
		}
		i ++;
	}
}

/*int	main(void)
{
	int a[4] = {3,2,1,4};
	ft_sort_int(a,4);
	printf("%d %d %d %d",a[0],a[1],a[2],a[3]);
}*/
