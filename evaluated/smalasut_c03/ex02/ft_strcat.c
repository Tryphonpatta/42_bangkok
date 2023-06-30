/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:58:45 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/14 11:18:49 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*i;

	i = dest;
	while (*i)
	{
		i++;
	}
	while (*src)
	{
		*i = *src;
		i++;
		src++;
	}
	*i = '\0';
	return (dest);
}

/*int main()
{
	char a[20] = "ff", b[] = "";
	char c[20] = "ff", d[] = "";
	ft_strcat(a,b);
	strcat(c,d);
	printf("%s\n",a);
	printf("%s",c);
}*/
