/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:06:43 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/14 23:17:22 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

int	ft_strlen(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	l;

	i = 0;
	l = 0;
	j = size;
	while (*dest)
	{
		i++;
		dest++;
	}
	if (j < i)
		return (j + ft_strlen(src));
	j -= (i + 1) ;
	while (src[l] && j > 0)
	{
		*dest = src[l];
		dest++;
		l++;
		j--;
	}
	*dest = '\0';
	return (i + ft_strlen(src));
}

/*int main()
{
	char a[20] = "", b[20] = "1234";
	char c[20] = "", d[20] = "1234";
	unsigned int n = 6;
	unsigned int x = strlcat(a,b,n);
	printf("%s %u\n",a, x);
	unsigned int y = ft_strlcat(c,d,n);
	printf("%s %u",c,y);
}*/
