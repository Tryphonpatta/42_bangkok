/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:49:35 by pracksaw          #+#    #+#             */
/*   Updated: 2023/06/13 22:25:22 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main(void) {
    char str1[] = "HELLO";
    char str2[] = "hello";
    char str3[] = "1234";
    char str4[] = "";
    
    int res1 = ft_str_is_printable(str1);
    int res2 = ft_str_is_printable(str2);
    int res3 = ft_str_is_printable(str3);
    int res4 = ft_str_is_printable(str4);
    
    printf("str1: %d\n", res1);
    printf("str2: %d\n", res2);
    printf("str3: %d\n", res3);
    printf("str4: %d\n", res4);
    
    return 0;
}
*/
