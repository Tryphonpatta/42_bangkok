/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:59:28 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/12 15:49:35 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*a;

	a = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && nb--)
	{
		*dest = *src;
		src ++;
		dest ++;
	}
	*dest = '\0';
	return (a);
}

// int main(void)
// {
// 	char a[20] = "Hello",b[6] = "World";
// 	char e[20] = "Hello";
// 	const char f[6] = "World";
// 	char *c = ft_strcat(a,b);
// 	char *d = strcat(e,f);
// 	printf("%s\n%s",c,d);
// }