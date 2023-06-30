/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:18:12 by pracksaw          #+#    #+#             */
/*   Updated: 2023/06/13 23:40:39 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}	
		i++;
	}
	return (1);
}
/*
int main(void) {
	char str1[7] = "12345";
	char str2[7] = "abc";
	char str3[1] = "";
	char str4[] = "123a";

	int res1 = ft_str_is_numeric(str1);
	int res2 = ft_str_is_numeric(str2);
	int res3 = ft_str_is_numeric(str3);
	int res4 = ft_str_is_numeric(str4);

	printf("str1: %d\n", res1);
	printf("str2: %d\n", res2);
	printf("str3: %d\n", res3);
	printf("str4: %d\n", res4);

	return 0;
}
*/
