/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:42:44 by pracksaw          #+#    #+#             */
/*   Updated: 2023/06/13 22:24:24 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
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
	char str1[7] = "12345";
	char str2[7] = "abc";
	char str3[1] = "";
	char str4[] = "123a";

	int res1 = ft_str_is_alpha(str1);
	int res2 = ft_str_is_alpha(str2);
	int res3 = ft_str_is_alpha(str3);
	int res4 = ft_str_is_alpha(str4);

	printf("str1: %d\n", res1);
	printf("str2: %d\n", res2);
	printf("str3: %d\n", res3);
	printf("str4: %d\n", res4);

	return 0;
}*/
