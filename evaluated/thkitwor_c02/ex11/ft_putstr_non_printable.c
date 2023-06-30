/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:08:48 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/14 01:29:03 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	int				b;
	int				d;

	while (*str)
	{
		c = *str;
		if (*str >= 32 && *str <= 126)
		{
			write(1, str, 1);
		}
		else
		{
			write(1, "\\", 1);
			b = c % 16;
			d = c / 16;
			print("0123456789abcdef"[d]);
			print("0123456789abcdef"[b]);
		}
		str++;
	}
}

// int	main(void)
// {
// 	ft_putstr_non_printable("Coucou\ntu vas bien ?");
// }
