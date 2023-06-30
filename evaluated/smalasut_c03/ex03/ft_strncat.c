/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:36:06 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/14 11:18:35 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*i;

	i = dest;
	while (*i)
	{
		i++;
	}
	while (nb != 0 && *src)
	{
		*i = *src;
		i++;
		src++;
		nb--;
	}
	*i = '\0';
	return (dest);
}

/*int main()
{
	char a[20] = "abcd", b[] = "1234";
	char c[20] = "abcd", d[] = "1234";
	int n = 4;
	ft_strncat(a,b,n);
	strncat(c,d,n);
	printf("%s\n%s",a,c);
}*/
