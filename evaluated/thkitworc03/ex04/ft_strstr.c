/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:41:25 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/12 17:59:10 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{	
	int	c;

	if (!to_find[0])
		return (str);
	while (*str != '\0')
	{
		c = 0;
		while (to_find[c] != '\0' && to_find[c] == str[c] && str[c] != '\0')
		{
			c++;
		}
		if (to_find[c] == '\0')
		{
			return (str);
		}
		str++;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
// 	char a[20] = "fsdsdf\tf", b[20] = "fsdsdf\tf", c[20] = "";
// 	char *l = strstr(a, c), *ll = ft_strstr(b, c);

// 	printf("%s\n%s",l,ll);
// }
