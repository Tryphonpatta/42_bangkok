/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 08:00:48 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/09 14:09:03 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*a;

	a = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}

/*
int	main(void)
{
	char	*a;
	char	b[4] = "abc";
	char	c[4]= "def";

	a = ft_strcpy(b, c);
	while (*a != '\0')
	{
		printf("%c",*a);
		a++;
	}
}
*/
