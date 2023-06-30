/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 15:06:27 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/20 18:47:22 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	else
		return (nb * (ft_recursive_factorial(nb - 1)));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%i", ft_recursive_factorial(5));
}
*/
