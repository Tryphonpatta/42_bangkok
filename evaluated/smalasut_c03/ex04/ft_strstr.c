/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 20:32:05 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/14 11:18:09 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		while (*(str + i) != '\0' && *(str + i) == to_find[i])
		{
			i++;
			if (to_find[i] == '\0')
				return (str);
			if (*(str + i) == '\0')
				return (NULL);
		}
		i = 0;
		str++;
	}
	return (NULL);
}

/*int main()
{
	char a[20] = "Helloworld", b[20] = "Helloworld";
	char c[20] = "ldr";
	printf("%s\n",strstr(a,c));
	printf("%s\n",ft_strstr(b,c));
}*/
