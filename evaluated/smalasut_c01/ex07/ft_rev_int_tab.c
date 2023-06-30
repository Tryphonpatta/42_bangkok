/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:38:44 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/10 20:04:07 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = *tab;
		*tab = *(tab + (size - 1 - 2 * i));
		*(tab + (size - 1 - 2 * i)) = tmp;
		tab++;
		i++;
	}
}

/*int	main(void)
{
	int a[] = {1, 2, 3, 4};
	int *x;
	int i = 0;

	x = a;
	ft_rev_int_tab(x, 4);
	while (i < 4)
	{
		printf("%d",x[i]);
		i++;
	}
}*/
