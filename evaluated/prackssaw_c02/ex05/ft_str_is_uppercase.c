/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 19:48:37 by pracksaw          #+#    #+#             */
/*   Updated: 2023/06/13 22:25:09 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}	
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char str1[] = "ABCDEFGH";
	char str2[] = "Hello";
	char str3[] = "12345";
	char str4[] = "";
	
	printf("String: %s\n", str1);
	printf("Is uppercase? %s\n\n", ft_str_is_uppercase(str1) ? "Yes" : "No");

	printf("String: %s\n", str2);
	printf("Is uppercase? %s\n\n", ft_str_is_uppercase(str2) ? "Yes" : "No");

	printf("String: %s\n", str3);
	printf("Is uppercase? %s\n\n", ft_str_is_uppercase(str3) ? "Yes" : "No");

	printf("String: %s\n", str4);
	printf("Is uppercase? %s\n\n", ft_str_is_uppercase(str4) ? "Yes" : "No");

	return 0;
}
*/
