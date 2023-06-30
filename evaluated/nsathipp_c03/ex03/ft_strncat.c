/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsathipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:28:06 by nsathipp          #+#    #+#             */
/*   Updated: 2023/06/12 18:28:08 by nsathipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = lenstr(dest);
	while (*src != '\0' && nb != 0)
	{
		dest[i] = *src;
		i++;
		src++;
		nb--;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char a[7] = "abc", b[] = "def", *x;

// 	x = ft_strcat(a,b,2);
// 	printf("%s", x);
// }