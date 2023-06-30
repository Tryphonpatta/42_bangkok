/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 22:55:57 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/09 20:41:06 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i < '7')
	{
		j = i + 1;
		while (j < '8')
		{
			k = j + 1;
			while (k < '9')
			{
				write (1, &i, 1);
				write (1, &j, 1);
				write (1, &k, 1);
				write (1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
	write(1, "789", 3);
}

/*int	main(void)
{
	ft_print_comb();
}*/
