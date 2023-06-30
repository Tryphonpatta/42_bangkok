/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:06:22 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/10 20:09:41 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

/*int	main(void)
{
	int a;
	int b;
	int *c;
	int *d;
	a = 3;
	b = 9;
	c = &a;
	d = &b;
	ft_swap(c,d);
	printf("%d %d %d %d",a,b,*c,*d);
}*/
