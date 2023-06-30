/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <vbanlues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 15:15:42 by vbanlues          #+#    #+#             */
/*   Updated: 2023/06/14 16:26:47 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			write(1, &str[i], 1);
		}
		else
		{
			x = (unsigned char)str[i] / 16;
			y = (unsigned char)str[i] % 16;
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[x], 1);
			write(1, &"0123456789abcdef"[y], 1);
		}
		i++;
	}
}
