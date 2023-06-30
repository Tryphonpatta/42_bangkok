/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:54:41 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/24 23:44:12 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

# include <stdio.h>
# include <stdlib.h>

struct s_dict
{
	long long int	value;
	char			*str;
	// int				len;
};

int	str_len(char *c)
{
	int	i;

	i = 0;
	while (c[i] && c[i] != '\n')
		i ++;
	return (i);
}

int	check(char c)
{
	if (c == '\f' || c == '\n' || c == '\t')
		return (1);
	if (c == '\v' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

long long int	ft_atoi(char *str)
{
	long long int	s;
	long long int	d;

	s = 0;
	d = 0;
	while (*str && check(*str))
		str ++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			d ++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		s *= 10;
		if (d % 2 == 0)
			s += *str - '0';
		else
			s -= *str - '0';
		str ++;
	}
	return (s);
}

int	validkey(int key)
{
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

char *ft_word(char *str)
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

struct s_dict	*make_dict(char *str)
{
	int				key;
	struct s_dict	*d;
	int				i;

	i = 0;
	d = (struct s_dict *)malloc(sizeof(struct s_dict) * 35);
	while (++ i < 32)
		d[i - 1].value = -1;
	while (*str)
	{
		while (*str && (*str == ' ' || *str == '\n'))
			str ++;
		key = ft_atoi(str);
		if (validkey(key) && *str)
		{
			while (*str != ':')
				str ++;
			str ++;
			d[keyindex(key)].value = key;
			d[keyindex(key)].str = ft_word(str);
		}
		while (*str && *str != '\n')
			str ++;
	}
	return (d);
}

int	checkdict(struct s_dict *d)
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
#endif