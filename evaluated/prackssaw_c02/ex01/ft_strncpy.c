/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:20:10 by pracksaw          #+#    #+#             */
/*   Updated: 2023/06/13 22:23:44 by pracksaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	j;

	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
/*
int main()
{
	char	dest[] = "Hello";
	char	src[] = "_it's_Norms ;_;";

	printf("This is dest: %s\n",dest);
	printf("This is src: %s\n",src);
	printf("This is after using strcpy(4) : %s\n", ft_strncpy(dest, src, 4));
}
*/
