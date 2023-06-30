/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:52:59 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/16 10:00:11 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	checkspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	ngt;
	int	i;
	int	nb;
	int	res;

	ngt = 1;
	i = 0;
	nb = 0;
	res = 1;
	while (((str[i] == '+') || checkspace(str[i]) || (str[i] == '-')))
	{
		if (str[i] == '-')
			ngt *= -1;
		i++;
	}
	str = str + i;
	i = 0;
	while (str[i] != '\0' && (str[i] >= '0') && (str[i] <= '9'))
		i++;
	while (i--)
	{
		nb += res * (str[i] - 48);
		res *= 10;
	}
	return (ngt * nb);
}
/*int main(){
    int c= ft_atoi("afsd-------");
    printf("%d", c);
}*/
