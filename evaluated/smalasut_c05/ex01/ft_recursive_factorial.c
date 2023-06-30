/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 06:29:55 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/14 21:22:20 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb < 3)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*int main()
{
	printf("%d",ft_recursive_factorial(-1));
}*/
