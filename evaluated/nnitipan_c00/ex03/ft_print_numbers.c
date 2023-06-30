/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnitipan <nnitipan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 11:17:48 by nnitipan          #+#    #+#             */
/*   Updated: 2023/06/09 15:06:42 by nnitipan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_numbers(void)
{
	char	first;

	first = '0';
	while (first < '0' + 10)
	{
		write(1, &first, 1);
		first++;
	}
}
