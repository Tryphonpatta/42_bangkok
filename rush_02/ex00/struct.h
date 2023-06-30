/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:54:41 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/28 15:42:23 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include <stdio.h>
# include <stdlib.h>
# include "ft_atoi.h"

struct s_dict
{
	long long int	value;
	char			*str;
};

int	validkey(int key)
{
	if (key < 0)
		return (0);
	if (key <= 20)
		return (1);
	if (key <= 100 && key % 10 == 0)
		return (1);
	if (key == 1000 || key == 1000000)
		return (1);
	if (key == 1000000000)
		return (1);
	return (0);
}

int	keyindex(int key)
{
	if (key <= 20)
		return (key);
	if (key <= 100)
		return (18 + key / 10);
	if (key == 1000)
		return (29);
	if (key == 1000000)
		return (30);
	if (key == 1000000000)
		return (31);
	return (0);
}

char	*ft_word(char *str)
{
	char	*a;
	char	*b;

	a = (char *)malloc(str_len(str) + 1);
	b = a;
	while (*str && *str == ' ')
		str ++;
	while (*str && *str != '\n')
	{
		*a = *str;
		if (*str && *str == ' ')
		{
			while (*str && *str == ' ')
				str++;
		}
		else
			str ++;
		a ++;
	}
	a --;
	while (*a == ' ')
		a --;
	*(a + 1) = '\0';
	return (b);
}

char	*ft_put_dict(char *str, struct s_dict *d, int *dupkey)
{
	int	key;

	while (*str && (*str == ' ' || *str == '\n'))
		str ++;
	key = ft_atoi(str);
	if (validkey(key) && *str)
	{
		while (*str != ':' && *str != '\n' && *str)
			str ++;
		if (!*str || *str == '\n')
			return (str);
		if (!is_printable(str))
		{
			str ++;
			return (str);
		}
		str ++;
		if (d[keyindex(key)].value != -1)
			*dupkey = 1;
		d[keyindex(key)].value = key;
		d[keyindex(key)].str = ft_word(str);
	}
	while (*str && *str != '\n')
		str ++;
	return (str);
}

struct s_dict	*make_dict(int *index, int *dupkey, char *str)
{
	struct s_dict	*d;

	d = (struct s_dict *)malloc(sizeof(struct s_dict) * 35);
	while (++ (*index) < 33)
		d[*index - 1].value = -1;
	while (*str)
	{
		str = ft_put_dict(str, d, dupkey);
	}
	return (d);
}

#endif