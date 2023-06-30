/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 08:40:17 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/15 04:55:18 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	str_len(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*a;
	char	*b;
	int		i;

	i = 0;
	a = (char *)malloc(str_len(src) + 1);
	b = a;
	if (!b)
		return (0);
	while (src[i])
	{
		a[i] = src[i];
		i++;
	}
	a[i] = '\0';
	return (b);
}

// int	main(void)
// {
// 	char	*a = "";
// 	char	*b;
// 	b = ft_strdup(a);
// 	printf("%s",b);
// }