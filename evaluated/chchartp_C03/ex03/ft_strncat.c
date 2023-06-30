/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchartp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:07:29 by chchartp          #+#    #+#             */
/*   Updated: 2023/06/13 11:44:30 by chchartp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*begin;
	unsigned int	x;

	begin = dest;
	x = 0;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && x < nb)
	{
		*dest = *src;
		dest++;
		src++;
		x++;
	}
	*dest = '\0';
	return (begin);
}

/*int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	char	str1[] = "Hello, ";
	char	str2[] = "World!";
	unsigned int	nb;

	nb = 3;
	ft_strncat(str1, str2, nb);
	write (1, str1, ft_strlen(str1));
}*/
