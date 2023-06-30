/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchartp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:24:34 by chchartp          #+#    #+#             */
/*   Updated: 2023/06/13 13:24:16 by chchartp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*haystack;
	char	*start_haystack;
	char	*curr;
	char	*start_to_find;

	haystack = str;
	start_to_find = to_find;
	while (*haystack != '\0')
	{
		start_haystack = haystack;
		curr = haystack;
		to_find = start_to_find;
		while (*curr == *to_find && *to_find != '\0')
		{
			curr++;
			to_find++;
		}
		if (*to_find == '\0')
		{
			return (start_haystack);
		}
		haystack++;
	}
	return (0);
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
	char	str1[] = "Hello, Word, World!, Hi";
	char	str2[] = "World!";
	char	*pstr;

	pstr = ft_strstr(str1, str2);
	if (pstr != 0)
		write (1, pstr, ft_strlen(pstr));
	else
		write (1, "N", 1);
}*/
