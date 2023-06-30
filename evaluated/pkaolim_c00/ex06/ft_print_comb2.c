/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pkaolim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 16:15:22 by pkaolim           #+#    #+#             */
/*   Updated: 2023/06/09 17:59:11 by pkaolim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		num[2];
	char	front[2];
	char	back[2];

	num[0] = 0;
	while (num[0] <= 98)
	{
		num[1] = num[0] + 1 ;
		while (num[1] <= 99)
		{
			front[1] = (num[0] % 10) + '0';
			front[0] = num[0] / 10 + '0';
			back[1] = (num[1] % 10) + '0';
			back[0] = num[1] / 10 + '0';
			write(1, front, 2);
			write(1, " ", 1);
			write(1, back, 2);
			if (num[0] != 98 || num[1] != 99)
				write(1, ", ", 2);
			num[1]++;
		}
		num[0]++;
	}
}
