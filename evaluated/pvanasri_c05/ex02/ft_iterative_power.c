/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <pvanasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:35:59 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/19 20:09:48 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 1;
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	while (i++ <= power)
	{
		result *= nb;
	}
	return (result);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_iterative_power(2, 10));
	printf("%i\n", ft_iterative_power(0, 5));
	printf("%i\n", ft_iterative_power(0, 0));
	printf("%i\n", ft_iterative_power(10, 0));
}
*/
