/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnitipan <nnitipan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 22:02:06 by nnitipan          #+#    #+#             */
/*   Updated: 2023/06/09 15:09:19 by nnitipan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_alphabet(void)
{
	char	a;

	a = 'a';
	while (a < 'a' + 26)
	{
		write(1, &a, 1);
		a++;
	}
}