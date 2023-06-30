/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:08:11 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/13 16:08:23 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int main(void)
// {
//     int a = 50;
//     int b = 11;
//     int div;
//     int mod;

//     int *ptrDiv = &div;
//     int *ptrMod = &mod;

//     ft_div_mod(a, b, ptrDiv, ptrMod);

//     printf("%i | %i", div, mod);

//     return 0;
// }
