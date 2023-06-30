/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:37:09 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/15 00:44:45 by thakitwo         ###   ########.fr       */
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
/*
#include<stdio.h>
int main (void){
	printf("%d", ft_is_prime(2147483646));
}*/
