/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:18:58 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/14 01:12:59 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		++i;
	}
	return (i);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		++i;
	}
	int	j;

	if (ft_strlen(dest) <= ft_strlen(src))
	{
		j = n;
		while (src[j] != '\0')
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (dest);
}

int main(void)
{
    char str1[10] = "tes";
    char str2[10] = "helf";
	char str4[10] = "tes";
    char str5[10] = "helf";

    char *str3 = ft_strncpy(str1, str2, 1);
	char *str6 = strncpy(str4,str5,1);

    printf("%s\n", str3);
	printf("%s",str6);
    return 0;
}
