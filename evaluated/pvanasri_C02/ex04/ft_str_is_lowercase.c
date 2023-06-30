/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:24:30 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/13 18:05:31 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		++len;
	}
	return (len);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (!(97 <= str[i] && str[i] <= 122))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

// int main(void)
// {
//     char *str1 = "dsadasjknckmna";
//     char *str2 = "#!@kldjas321";
//     char *str3 = "";

//     printf("%i\n", ft_str_is_lowercase(str1));
//     printf("%i\n", ft_str_is_lowercase(str2));
//     printf("%i\n", ft_str_is_lowercase(str3));
// }
