/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:45:09 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/16 10:39:42 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	len(char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	checkspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	cton(char c, char *base)
{
	int	i;

	i = 0;
	while (c != base[i] && base[i])
		i++;
	if (base[i] == '\0')
		return (-1);
	return (i);
}

int	checkerror(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (len(base) < 2)
		return (1);
	while (i < len(base))
	{
		j = i + 1;
		if (checkspace(base[i]))
			return (1);
		while (j < len(base))
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	lens;
	int	b;
	int	nb;
	int	ngt;

	lens = len(str);
	b = 1;
	nb = 0;
	ngt = 1;
	if (checkerror(base))
		return (0);
	while (checkspace(*str) || *str == '+' || *str == '-')
	{
		if (*str++ == '-')
			ngt *= -1;
	}
	lens = len(str);
	while (lens--)
	{
		if (cton(str[lens], base) == -1)
			return (0);
		nb += b * cton(str[lens], base);
		b *= len(base);
	}
	return (ngt * nb);
}
