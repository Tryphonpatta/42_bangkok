/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:31:57 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/13 17:33:29 by pvanasri         ###   ########.fr       */
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

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (!(65 <= str[i] && str[i] <= 90))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

// int main(void)
// {
//     char *str1 = "ABCDADSJKL";
//     char *str2 = "#!@kldjas321";
//     char *str3 = "";

//     printf("%i\n", ft_str_is_uppercase(str1));
//     printf("%i\n", ft_str_is_uppercase(str2));
//     printf("%i\n", ft_str_is_uppercase(str3));
// }
