/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:30:29 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/15 00:23:41 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long int	i;

	i = 1;
	while (1)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			return (0);
		i++;
	}
}
/*
#include<stdio.h>p
int main(void)
{
	printf("%d", ft_sqrt(2147483647));
}
*/
