/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:56:57 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/12 17:59:38 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		if (*s1 == '\0')
		{
			return (0);
		}
		s1 ++;
		s2 ++;
	}
	return (0);
}

// #include <string.h>
// int main (void) {
// 	char a[20] = "asdj", b[20] = "asdi";
// 	int n = 1;
// 	printf("%d\n",ft_strncmp(a, b, n));
// 	printf("%d\n",strncmp(a, b, n));
// }
