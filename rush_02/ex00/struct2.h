/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct2.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <vbanlues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 17:29:48 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/26 17:53:08 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT2_H
# define STRUCT2_H
# include "struct.h"

int	checks_dict(struct s_dict *d)
{
	int	i;
	int	cnt;

	cnt = 0;
	i = 0;
	while (i < 32)
	{
		if (d[i].value == -1)
		{
			return (1);
		}
		i ++;
	}
	return (0);
}

int	str_cmp(char *a, char *b)
{
	while (*a && *b && *a == *b)
	{
		a ++;
		b ++;
	}
	return (*a - *b);
}

int	dupvalue(struct s_dict *d)
{
	int	i;
	int	j;

	i = 0;
	while (i < 31)
	{
		j = i + 1;
		while (j < 32)
		{
			if (str_cmp(d[i].str, d[j].str) == 0)
				return (1);
			j ++;
		}
		i ++;
	}
	return (0);
}

#endif