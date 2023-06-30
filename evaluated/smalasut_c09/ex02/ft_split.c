/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 12:52:24 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/29 14:59:39 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_lenstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	in_charset(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	get_string(char *str, char *charset)
{
	int	c;
	int	i;

	c = 0;
	i = 1;
	if (*str == '\0')
		return (0);
	if (*charset == '\0')
		return (1);
	while (in_charset(*str, charset))
		str++;
	while (*str)
	{
		if (c == 0 && in_charset(*str, charset))
		{
			c = 1;
			i++;
		}
		if (!in_charset(*str, charset))
			c = 0;
		str++;
	}
	if (in_charset(*(str - 1), charset))
		i--;
	return (i);
}

char	*set_word(char *str, char *charset)
{
	int		i;
	char	*a;

	i = 0;
	if (*charset == '\0')
		i = ft_lenstr(str);
	else
	{
		while (!in_charset(str[i], charset))
			i++;
	}
	a = (char *)malloc((i + 1) * sizeof (char));
	a[i] = '\0';
	while (i--)
		a[i] = str[i];
	return (a);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		n;

	n = 0;
	i = get_string(str, charset);
	res = (char **)malloc((i + 1) * sizeof (char *));
	if (!res)
		return (0);
	while (n < i)
	{
		while (in_charset(*str, charset) && *str)
			str++;
		res[n] = set_word(str, charset);
		str += ft_lenstr(res[n]);
		n++;
	}
	res[n] = (char *)malloc(1 * sizeof (char));
	res[n] = 0;
	return (res);
}

/*int	main()
{
	char	a[] = "";
	char	b[] = "";
	char	**s;
	int	i;

	s = ft_split(a, b);
	i = 0;
	printf("........\n");
	while (i < 2)
	{
		printf("%s\n", s[i]);
		i++;
	}
}*/
