/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:01:05 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/13 20:33:50 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 1)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
/*
#include<stdio.h>
int main (void)
{
	printf("%d",ft_recursive_factorial(0));
}
*/
