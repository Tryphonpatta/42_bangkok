/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lplaton <lplaton@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:55:43 by lplaton           #+#    #+#             */
/*   Updated: 2023/06/28 16:07:51 by lplaton          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && is_separator(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !is_separator(str[i], charset))
			i++;
	}
	return (count);
}

int	get_word_length(char *str, char *charset)
{
	int	length;
	int	i;

	length = 0;
	i = 0;
	while (str[i] && !is_separator(str[i], charset))
	{
		length++;
		i++;
	}
	return (length);
}

char	*extract_word(char *str, char *charset)
{
	int		word_length;
	char	*word;
	int		i;

	word_length = get_word_length(str, charset);
	word = (char *)malloc(sizeof(char) * (word_length + 1));
	i = 0;
	while (i < word_length)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		string_count;
	char	**strings;
	int		i;

	string_count = count_strings(str, charset);
	strings = (char **)malloc(sizeof(char *) * (string_count + 1));
	i = 0;
	while (*str != '\0')
	{
		while (*str != '\0' && is_separator(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = extract_word(str, charset);
			i++;
		}
		while (*str && !is_separator(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
