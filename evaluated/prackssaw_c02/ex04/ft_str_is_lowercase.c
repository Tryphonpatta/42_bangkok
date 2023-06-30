/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:49:21 by pracksaw          #+#    #+#             */
/*   Updated: 2023/06/13 22:24:54 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void) {
	char str1[] = "12345";
	char str2[] = "abc";
	char str3[] = "";
	char str4[] = "123a";

	int res1 = ft_str_is_lowercase(str1);
	int res2 = ft_str_is_lowercase(str2);
	int res3 = ft_str_is_lowercase(str3);
	int res4 = ft_str_is_lowercase(str4);

	printf("str1: %d\n", res1);
	printf("str2: %d\n", res2);
	printf("str3: %d\n", res3);
	printf("str4: %d\n", res4);

	return 0;
}
*/
