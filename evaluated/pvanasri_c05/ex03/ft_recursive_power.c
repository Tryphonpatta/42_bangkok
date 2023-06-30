/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <pvanasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:50:15 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/19 20:09:13 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_recursive_power(5, 2));
	printf("%i\n", ft_recursive_power(2, 10));
	printf("%i\n", ft_recursive_power(0, 0));
	printf("%i\n", ft_recursive_power(0, 3));
	printf("%i\n", ft_recursive_power(6, -8));
}
*/
