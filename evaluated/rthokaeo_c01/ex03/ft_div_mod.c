/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthokaeo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 16:02:35 by rthokaeo          #+#    #+#             */
/*   Updated: 2023/06/11 15:36:43 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int	main(void)
//{
//	int	a,b,div,mod;
//
//	a = 7;
//	b = 3;
//
//	ft_div_mod(a, b, &div, &mod);
//	printf("This is a div %d\n", div);
//	printf("This is a mod %d\n", mod);
//	
//	return 0;
//}
