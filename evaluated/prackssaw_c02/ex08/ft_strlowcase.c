/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:33:15 by pracksaw          #+#    #+#             */
/*   Updated: 2023/06/13 22:26:10 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
	char str1[] = "Hello, World!";
	char str2[] = "Testing 123";
	char str3[] = "OverfLoW";
	char str4[] = "";

	printf("Before: %s\n", str1);
	ft_strlowcase(str1);
	printf("After: %s\n\n", str1);

	printf("Before: %s\n", str2);
	ft_strlowcase(str2);
	printf("After: %s\n\n", str2);

	printf("Before: %s\n", str3);
	ft_strlowcase(str3);
	printf("After: %s\n\n", str3);

	printf("Before: %s\n", str4);
	ft_strlowcase(str4);
	printf("After: %s\n\n", str4);

	return 0;
}
*/
