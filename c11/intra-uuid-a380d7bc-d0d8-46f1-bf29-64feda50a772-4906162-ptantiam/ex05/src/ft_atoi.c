/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 12:43:34 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/12 18:34:35 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
int	check(char c)
{
	if (c == '\f' || c == '\n' || c == '\t')
		return (1);
	if (c == '\v' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	s;
	int	d;

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

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d",ft_atoi(" \t\f\n+---+---2147483647"));
// }
