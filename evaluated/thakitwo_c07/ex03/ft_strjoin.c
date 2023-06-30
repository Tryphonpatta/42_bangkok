/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:16:34 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/15 12:04:58 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char **strs, char *sep, char *str, int size)
{
	int	i;
	int	j;
	int	co;

	i = 0;
	j = 0;
	while (i < size)
	{
		co = 0;
		while (strs[i][co])
			str[j++] = strs[i][co++];
		co = 0;
		if (i == size - 1)
			break ;
		while (sep[co])
			str[j++] = sep[co++];
		i++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		co;
	int		i;
	int		j;

	if (size == 0)
	{
		str = (char *)malloc(1);
		*str = '\0';
		return (str);
	}
	co = ft_strlen(sep) * (size - 1);
	i = 0;
	j = 0;
	while (i < size)
		co += ft_strlen(strs[i++]);
	str = (char *)malloc(sizeof(char) * (co + 1));
	if (str == 0)
		return (0);
	ft_strcpy(strs, sep, str, size);
	return (str);
}
