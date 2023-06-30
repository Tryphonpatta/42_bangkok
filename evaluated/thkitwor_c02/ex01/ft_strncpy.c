/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:01:33 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/14 01:29:15 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*a;

	a = dest;
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n --;
	}
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n --;
	}
	return (a);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	*a;
	char	*f;
	char	c[29] = "1234567", d[29] = "1234567";
	char	*b = "jvdr";
	int		n = 5;
	f = strncpy(c, b, n);
	a = ft_strncpy(d, b, n);
	printf("%s\n", a);
	printf("%s", f);
	// for(int i=0;i<29;i++){
	// 	if (a[i] == '\0'){
	// 		printf("0");
	// 	}
	// 	printf("%c",a[i]);
	// }
}
*/
