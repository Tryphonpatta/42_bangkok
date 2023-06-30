/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:20:06 by moetienn          #+#    #+#             */
/*   Updated: 2023/06/08 22:55:27 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	div;
	int	mod;

	if (b != 0)
	{	
		div = *a / *b;
		mod = *a % *b;
		*a = div;
		*b = mod;
	}
}
int	main()
{
	int	c;
	int	d;

	c = 11;
	d = 3;
	ft_ultimate_div_mod(&c, &d);
	printf("%d\n", c);
	printf("%d\n", d);
	return(0);
}
