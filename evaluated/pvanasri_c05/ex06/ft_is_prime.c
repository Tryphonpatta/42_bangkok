/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <pvanasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:21:06 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/20 12:53:04 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	if (nb <= 1)
		return (0);
	n = 2;
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i\n", ft_is_prime(0)); // 0
	printf("%i\n", ft_is_prime(1)); // 0
	printf("%i\n", ft_is_prime(2)); // 1
	printf("%i\n", ft_is_prime(3)); // 1
	printf("%i\n", ft_is_prime(4)); // 0
	printf("%i\n", ft_is_prime(5)); // 1
	printf("%i\n", ft_is_prime(6)); // 0
	printf("%i\n", ft_is_prime(7)); // 1
	printf("%i\n", ft_is_prime(8)); // 0
}
*/