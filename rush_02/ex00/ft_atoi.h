/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <vbanlues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 14:11:10 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/26 18:01:35 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOI_H
# define FT_ATOI_H

int	is_printable(char *str)
{
	while (*str && *str != '\n')
	{
		if (*str < 32 || *str > 126)
			return (0);
		str ++;
	}
	return (1);
}

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

#endif