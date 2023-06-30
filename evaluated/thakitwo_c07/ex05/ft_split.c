/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 22:22:38 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/20 23:35:36 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	checksep(char str, char *charset)
{
	while (*charset)
	{
		if (str == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	nword(char *str, char *charset)
{
	int	n;

	n = 0;
	while (*str)
	{
		while (*str && checksep(*str, charset))
			str++;
		if (*str && !checksep(*str, charset))
		{
			n++;
			while (*str && !checksep(*str, charset))
				str++;
		}
	}
	return (n);
}

void	makeword(char **tab, char *begin, char *charset, int n)
{
	int	i;

	i = 0;
	while (*begin && !checksep(*begin, charset))
	{
		tab[n][i] = *begin;
		begin++;
		i += 1;
	}
	tab[n][i] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	int		count;
	char	**tab;
	int		n;

	count = 0;
	n = 0;
	tab = malloc(sizeof(char *) * (nword(str, charset) + 1));
	while (*str)
	{
		if (!checksep(*str, charset))
			count++;
		if (count != 0 && (checksep(*str, charset) || *(str + 1) == '\0'))
		{
			if (*(str + 1) == '\0' && !checksep(*str, charset))
				count--;
			tab[n] = malloc(sizeof(char) * (count + 1));
			makeword(tab, str - count, charset, n);
			count = 0;
			n++;
		}
		str++;
	}
	tab[n] = 0;
	return (tab);
}
