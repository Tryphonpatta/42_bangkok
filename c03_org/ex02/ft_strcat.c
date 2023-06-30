/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:53:54 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/11 13:10:46 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
char	*ft_strcat(char *dest, char *src)
{
	char	*a;

	a = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src)
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