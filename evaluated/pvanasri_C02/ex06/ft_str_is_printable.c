/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:36:08 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/13 17:38:19 by pvanasri         ###   ########.fr       */
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

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (!(32 <= str[i] && str[i] <= 126))
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

//     printf("%i\n", ft_str_is_printable(str1));
//     printf("%i\n", ft_str_is_printable(str2));
//     printf("%i\n", ft_str_is_printable(str3));
// }
