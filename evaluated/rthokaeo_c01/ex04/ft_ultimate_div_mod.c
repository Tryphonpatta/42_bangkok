/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthokaeo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:57:14 by rthokaeo          #+#    #+#             */
/*   Updated: 2023/06/11 15:37:23 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

//int	main(void)
//{
//	int	a,b;
//
//	a = 7;
//	b = 3;
//
//	ft_ultimate_div_mod(&a, &b);
//	printf("This is a div %d\n", a);
//	printf("This is a mod %d\n", b);
//	
//	return 0;
//}
