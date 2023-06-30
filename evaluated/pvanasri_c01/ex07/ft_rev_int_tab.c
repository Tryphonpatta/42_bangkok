/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:10:47 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/13 16:17:43 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		++i;
	}
}

// int main(void)
// {
//     int array[5] = {1,2,3,4,5};

//     ft_rev_int_tab(array, 5);

//     int i = 0;
//     while (i < 5)
//     {
//         printf("%i", array[i]);
//         ++i;
//     }   
//     return 0;
// }
