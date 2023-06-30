/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sawongpr <sawongpr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 08:44:34 by sawongpr          #+#    #+#             */
/*   Updated: 2023/06/23 13:20:18 by sawongpr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *charset)
{
	while (*charset)
		if (c == *charset++)
			return (1);
	return (0);
}

int	count_char(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (*str && !is_sep(*str++, charset))
		cnt++;
	return (cnt);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str && !is_sep(*str, charset))
		{
			cnt++;
			while (*str && !is_sep(*str, charset))
				str++;
		}
	}
	return (cnt);
}

char	*strcpy_sep(char **str, char *split_str, char *charset)
{
	int	j;

	j = 0;
	while (**str && !is_sep(**str, charset))
		split_str[j++] = *(*str)++;
	split_str[j] = '\0';
	return (split_str);
}

char	**ft_split(char *str, char *charset)
{
	char	**split_str;
	int		i;
	int		j;

	split_str = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!split_str)
		return (0);
	i = 0;
	j = 0;
	while (*str)
	{
		while (*str && is_sep(*str, charset))
			str++;
		if (*str && !is_sep(*str, charset))
		{
			split_str[i] = malloc(sizeof(char) * count_char(str, charset) + 1);
			if (!split_str[i])
				return (0);
			split_str[i] = strcpy_sep(&str, split_str[i], charset);
			i++;
		}
	}
	split_str[i] = 0;
	return (split_str);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "zumDT8ZqA1r Bo0lNunOCNwL4qvQGkcX";
// 	char charset[] = "NG";

// 	char **output = ft_split(str, charset);
// 	for (int i = 0; i < count_words(str, charset); ++i)
// 		printf("%s\n", output[i]);
// }