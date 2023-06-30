/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:35:22 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/12 16:05:41 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*a;

	a = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (nb -- && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (a);
}

// #include <stdio.h>
// int main (void)
// {
// 	char a[20] = "vfds",b[20] = "vret";
// 	int n = 8;
// 	printf("%s",ft_strncat(a,b,n));
// }
