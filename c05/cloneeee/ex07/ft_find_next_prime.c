/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:27:16 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/13 21:18:43 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_find_next_prime(int nb)
{
	int	i;
	int	c;

	while (nb <= 2147483647 && nb >= 0)
	{
		if (nb - 1 >= 1)
		{
			c = 1;
			i = 2;
			while (i <= nb / i)
			{
				if (nb % (i ++) == 0)
				{	
					c = 0;
					break ;
				}
			}
			if (c)
				return (nb);
		}
		nb ++;
	}
	return (2);
}

// int main(void)
// {
// 	printf("%d",ft_find_next_prime(2147483000));
// }