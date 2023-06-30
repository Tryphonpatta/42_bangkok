/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:08:32 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/13 16:16:16 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aa;
	int	bb;

	aa = *a;
	bb = *b;
	*a = aa / bb;
	*b = aa % bb;
}

// int main(void)
// {
//     int a = 50;
//     int b = 11;

//     int *ptrA = &a;
//     int *ptrB = &b;

//     ft_ultimate_div_mod(ptrA, ptrB);

//     printf("%i | %i", a, b);

//     return 0;
// }
