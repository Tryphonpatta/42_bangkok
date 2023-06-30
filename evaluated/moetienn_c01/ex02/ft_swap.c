/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 21:40:17 by moetienn          #+#    #+#             */
/*   Updated: 2023/06/08 22:51:29 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
int	main()
{
	int	d;
	int	g;
	int	*e;
	int	*f;

	e = &d;
	f = &g;
	d = 12;
	g = 4;
	ft_swap(e, f);
	printf("%d\n", d);
	printf("%d\n", g);
	return(0);
}
