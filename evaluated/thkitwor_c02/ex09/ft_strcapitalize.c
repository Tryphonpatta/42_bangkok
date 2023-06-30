/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:18:17 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/09 18:59:00 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	check(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	if (c >= '0' && c <= '9')
	{
		return (0);
	}
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[i] != '\0')
	{
		c++;
		if ((str[i] >= 'a' && str[i] <= 'z') && c == 1)
		{
			str[i] += 'A' - 'a';
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z') && c >= 2)
		{
			str[i] += 'a' - 'A';
		}
		else if (check(str[i]))
		{
			c = 0;
		}
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*a;
// 	char	b[62] = "salut, comment tu vas ?";

// 	a = ft_strcapitalize(b);
// 	while (*a != '\0')
// 	{
// 		printf("%c",*a);
// 		a++;
// 	}
// }
