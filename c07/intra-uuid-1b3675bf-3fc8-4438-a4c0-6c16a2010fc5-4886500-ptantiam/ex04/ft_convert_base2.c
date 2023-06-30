/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 03:25:24 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/15 21:35:54 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *a)
{
	int	i;

	i = 0;
	while (a[i])
		i ++;
	return (i);
}

int	find_length(long long int nbr, char *base)
{
	int	l;
	int	base_l;

	l = 0;
	base_l = str_len(base);
	if (nbr < 0)
	{
		nbr *= -1;
		l ++;
	}
	while (nbr >= base_l)
	{
		nbr /= base_l;
		l ++;
	}
	return (l + 1);
}

int	checkwhite(char c)
{
	if (c == '\f' || c == '\n' || c == '\t')
		return (1);
	if (c == '\v' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

char	checkbase(char *c)
{
	int	i;
	int	j;

	i = 0;
	if (str_len(c) <= 1)
		return (1);
	while (c[i])
	{
		j = i + 1;
		if (c[i] == '+' || c[i] == '-')
			return (1);
		while (c[j])
		{
			if (c[i] == c[j])
				return (1);
			j ++;
		}
		i ++;
	}
	return (0);
}
