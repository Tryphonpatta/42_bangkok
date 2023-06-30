/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnitipan <nnitipan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:35:52 by nnitipan          #+#    #+#             */
/*   Updated: 2023/06/08 20:11:55 by nnitipan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_display_3digits(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	digit_1;
	char	digit_2;
	char	digit_3;

	digit_1 = '0';
	while (digit_1 <= '9')
	{
		digit_2 = digit_1 + 1;
		while (digit_2 <= '9')
		{
			digit_3 = digit_2 + 1;
			while (digit_3 <= '9')
			{
				ft_display_3digits(digit_1, digit_2, digit_3);
				if (!(digit_1 == '7' && digit_2 == '8' && digit_3 == '9'))
				{
					write(1, ", ", 2);
				}
				digit_3++;
			}
			digit_2++;
		}
		digit_1++;
	}
}
