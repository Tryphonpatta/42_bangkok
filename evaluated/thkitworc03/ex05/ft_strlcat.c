/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:54:11 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/12 10:49:46 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (*c != '\0')
	{
		i++;
		c++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	s;

	if (size <= ft_strlen(dest))
	{
		return (size + ft_strlen(src));
	}
	c = ft_strlen(dest);
	s = 0;
	while (src[s] != '\0' && c + 1 < size)
	{
		dest[c] = src[s];
		c++;
		s++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest)+ ft_strlen(&src[s]));
}

/*
#include <string.h>
#include <stdio.h>

int main(void)
{
	char a[20] = "Hellooooo", *b= "worldddddddddddd", c[20] = "Hellooooo";
	int size = 5;
	int l = strlcat(a,b,size);
	printf("%s %d\n", a, l);
	int ll = ft_strlcat(c,b,size);
	printf("%s %d", c, ll);
}
*/
