/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recur.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <vbanlues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:21:34 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/26 17:42:44 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RECUR_H
# define FT_RECUR_H
# include <unistd.h>
# include "struct.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	while (*c)
	{
		write(1, c, 1);
		c ++;
	}
}

int	ft_recur(int status, long long int nbr, struct s_dict *d)
{
	int	size;

	size = 31;
	if (nbr == 0)
		return (status);
	while (d[size].value > nbr)
	{
		size --;
		if (d[size].value == nbr && nbr < 100)
		{
			if (status != 0)
				write(1, " ", 1);
			ft_putstr(d[size].str);
			status ++;
			return (status);
		}
	}
	if (size >= 28)
		status = ft_recur(status, nbr / d[size].value, d);
	if (status != 0)
		write(1, " ", 1);
	ft_putstr(d[size].str);
	status++;
	status = ft_recur(status, nbr % d[size].value, d);
	return (status);
}

#endif