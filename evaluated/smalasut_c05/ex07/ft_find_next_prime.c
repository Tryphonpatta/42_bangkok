/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 00:37:52 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/15 01:23:26 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	long long int	i;

	if (nb < 2)
		return (2);
	while (1)
	{
		i = 2;
		while ((i * i) < nb)
		{
			if (nb % i == 0)
				break ;
			i++;
		}
		if ((i * i) > nb)
			return (nb);
		nb++;
	}
}

/*int main()
{
	printf("%d",ft_find_next_prime(4));
}*/
