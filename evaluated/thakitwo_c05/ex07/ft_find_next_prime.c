/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:12:27 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/15 00:44:54 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long long int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (1)
	{
		if (nb % i == 0)
			return (0);
		if (i * i > nb)
			return (1);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 3)
		return (2);
	if (nb % 2 == 0)
		nb++;
	while (1)
	{
		if (ft_is_prime(nb))
			return (nb);
		nb += 2;
	}
}
/*
#include<stdio.h>
int main (void)
{
	printf("%d", ft_find_next_prime(2147483646));
}*/
