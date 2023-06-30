/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 21:00:03 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/15 00:53:03 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	string_size(char **strs, int size)
{
	int	i;
	int	l;
	int	j;

	i = 0;
	l = 0;
	j = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			l ++;
			j ++;
		}
		i ++;
	}
	return (l);
}

int	str_len(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i ++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*a;
	char	*s;
	int		j;

	i = 0;
	a = (char *)malloc(string_size(strs, size) + str_len(sep) * size + 1);
	s = a;
	while (i < size)
	{
		while (*strs[i])
		{
			*a = *strs[i];
			strs[i]++;
			a ++;
		}
		j = 0;
		while (sep[j] && i < size -1)
			*(a++) = sep[j++];
		i++;
	}
	*a = '\0';
	return (s);
}

// int main(void)
// {
// 	char *sep;
// 	sep = "";
// 	char **b;
// 	b[0] = "Hello";
// 	b[1] = "World";
// 	// printf("%s --> ",b[0]);
// 	char *c = ft_strjoin(0,b,sep);
// 	printf("%s",c);
// }