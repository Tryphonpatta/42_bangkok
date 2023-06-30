/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 08:35:29 by moetienn          #+#    #+#             */
/*   Updated: 2023/06/08 22:52:57 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 11;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
	return(0);
} 
