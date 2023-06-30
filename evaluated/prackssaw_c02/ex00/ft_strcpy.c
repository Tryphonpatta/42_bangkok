/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:20:10 by pracksaw          #+#    #+#             */
/*   Updated: 2023/06/13 23:40:22 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
/*
int main()
{
	char	dest[] = "Hello";
	char	src[] = "_it's_Norms ;_;";

	printf("This is dest: %s\n",dest);
	printf("This is src: %s\n",src);
	printf("This is after using strcpy : %s\n", ft_strcpy(dest, src));	
	printf("This is dest after : %s\n",dest);
	printf("This is src after : %s\n",src);
}
*/
