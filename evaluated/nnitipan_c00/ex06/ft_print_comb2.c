/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnitipan <nnitipan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 17:47:34 by nnitipan          #+#    #+#             */
/*   Updated: 2023/06/09 15:06:51 by nnitipan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	left;
	int	right;

	left = 0;
	right = 0;
	while (left < 100)
	{
		right = left + 1;
		while (right < 100)
		{
			ft_putchar(left / 10 + '0');
			ft_putchar(left % 10 + '0');
			ft_putchar(' ');
			ft_putchar(right / 10 + '0');
			ft_putchar(right % 10 + '0');
			if (!(left == 98 && right == 99))
			{
				write(1, ", ", 2);
			}
			right++;
		}
		left++;
	}	
}
