/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:12:26 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/10 20:09:14 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int a;
	int b;
	int *c;
	int *d;
	scanf("%d %d",&a,&b);
	c = &a;
	d = &b;
	ft_div_mod(a,b,c,d);
	printf("%d %d %d %d",a,b,*c,*d);
}*/
