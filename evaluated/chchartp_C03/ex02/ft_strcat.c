/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchartp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:32:24 by chchartp          #+#    #+#             */
/*   Updated: 2023/06/13 15:22:32 by chchartp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*begin;

	begin = dest;
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (begin);
}

/*int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	main(void)
{
	char	str1[] = "Hello, ";
	char	str2[] = "World!";

	ft_strcat(str1, str2);
	write (1, str1, ft_strlen(str1));
}*/
