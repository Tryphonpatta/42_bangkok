/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsathipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 12:47:35 by nsathipp          #+#    #+#             */
/*   Updated: 2023/06/13 12:47:37 by nsathipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	lenstr(char *src)
{
	unsigned int	len;

	len = 0;
	while (*src != '\0')
	{
		src++;
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = lenstr(dest);
	j = lenstr(src);
	if (size <= i)
		return (lenstr(src) + size);
	while (*dest != '\0' && size != 0)
	{
		dest++;
		size--;
	}
	while (*src != '\0' && size != 1)
	{
		*dest = *src;
		dest++;
		src++;
		size--;
	}
	*dest = '\0';
	return (i + j);
}
// int	main()
// {
// 	char dest[20] = "Hel";
//     char src[] = " World!";
// 	char a[20] = "Hel";
//     char b[] = " World!";
// 	int x = strlcat(dest,src,13);
// 	int y = ft_strlcat(a, b, 13);
// 	printf("%s\n",dest);
// 	printf("%s\n",a);
// 	printf("%d %d",x,y);
// }