/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:28:07 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/13 23:56:39 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include<stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
		i++;
	if (size == 0)
		return (i);
	i = 0;
	while (src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}
// int main(void){
// 	char a[20]="abcdefghijk" , b[20];
// 	int g = ft_strlcpy(b,a,3);
// 	printf("%d",g);

// }