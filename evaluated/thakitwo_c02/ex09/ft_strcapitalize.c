/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:45:31 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/09 16:12:50 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkletter(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	if (c >= 'a' && c <= 'z')
	{
		return (2);
	}
	if (c >= '0' && c <= '9')
	{
		return (3);
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	bef;

	i = 0;
	bef = 0;
	while (str[i] != '\0')
	{
		if (checkletter(str[i]) == 2 && bef == 0)
		{
			str[i] = str[i] - 'a' + 'A';
			bef = 1;
		}
		else if (checkletter(str[i]) == 1 && bef != 0)
		{
			str[i] = str[i] - 'A' + 'a';
			bef = 2;
		}
		bef = checkletter(str[i]);
		i++;
	}
	return (str);
}
