/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:23:50 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/14 02:50:13 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	check(char c)
{
	if (c == ' ' || c == '\f')
	{
		return (1);
	}
	else if (c == '\n' || c == '\r')
	{
		return (1);
	}
	else if (c == '\t' || c == '\v')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int	c;
	int	ans;

	c = 0;
	ans = 0;
	while (*str != '+' && *str != '-' && !(*str >= '0' && *str <= '9'))
	{
		if (!(check(*str)))
			return (0);
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			c ++;
		str++;
	}
	while ((*str >= '0' && *str <= '9'))
	{
		ans = ans * 10 + (*str - '0');
		str++;
	}
	if (c % 2 == 1)
		ans *= -1;
	return (ans);
}

// int	main(void)
// {
// 	printf("%d", ft_atoi(" \f\n\t\r\v +----+-21474 83648"));
// }
