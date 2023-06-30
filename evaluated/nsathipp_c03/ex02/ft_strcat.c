/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsathipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:06:24 by nsathipp          #+#    #+#             */
/*   Updated: 2023/06/12 18:08:20 by nsathipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;

	i = lenstr(dest);
	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char a[7] = "abc", b[] = "def", *x;

// 	x = ft_strcat(a,b);
// 	printf("%s", x);
// }