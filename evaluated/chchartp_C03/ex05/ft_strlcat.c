/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchartp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:39:09 by chchartp          #+#    #+#             */
/*   Updated: 2023/06/14 09:42:36 by chchartp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	sl;
	char			*dest_last;
	char			*src_first;

	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	if (size <= dl)
	{
		return (size + sl);
	}
	dest_last = dest + dl;
	src_first = src;
	while (*src_first != '\0' && dest_last - dest < size - 1)
	{
		*dest_last = *src_first;
		dest_last++;
		src_first++;
	}
	*dest_last = '\0';
	return (dl + sl);
}

/*int	main(void)
{
	char	str1[15] = "Good ";
	char	str2[] = "Morning!";
	unsigned int	n;
	unsigned int	l;

	n = 15;
	l = ft_strlcat(str1, str2, n);
	write (1, str1, l);
}*/
