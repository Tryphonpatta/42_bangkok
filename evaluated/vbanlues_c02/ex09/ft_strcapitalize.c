/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:21:18 by vbanlues          #+#    #+#             */
/*   Updated: 2023/06/12 10:21:28 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	check_upper(char *str, int i)
{
	if ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
		|| (str[i - 1] >= '0' && str[i - 1] <= '9')
		|| (str[i - 1] >= 'A' && str[i -1] <= 'Z'))
	{
		str[i] = str[i] + 32;
	}
}

void	check_lower(char *str, int i)
{
	if ((str[i - 1] >= 'a' && str[i - 1] <= 'z')
		|| (str[i - 1] >= '0' && str[i - 1] <= '9')
		|| (str[i - 1] >= 'A' && str[i -1] <= 'Z'))
	{
	}
	else
	{
		str[i] = str[i] - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			check_upper(str, i);
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			check_lower(str, i);
		}
		i++;
	}
	return (str);
}
