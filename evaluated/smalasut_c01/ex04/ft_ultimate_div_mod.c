/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:12:34 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/10 20:08:38 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	j;

	i = *a / *b;
	j = *a % *b;
	*a = i;
	*b = j;
}

/*int	main(void)
{
	int a;
	int b;
	int *e;
	int *f;

	scanf("%d %d",&a,&b);
	e = &a;
	f = &b;
	ft_ultimate_div_mod(e,f);
	printf("%d %d",a,b);
}*/
