/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:22:04 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/13 17:34:12 by pvanasri         ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if (!(48 <= str[i] && str[i] <= 57))
		{
			return (0);
		}
		++i;
	}
	return (1);
}

// int main(void)
// {
//     char *str1 = "12315421421";
//     char *str2 = "48217JNdkjsa89u132#@!";
//     char *str3 = "";

//     printf("%i\n", ft_str_is_numeric(str1));
//     printf("%i\n", ft_str_is_numeric(str2));
//     printf("%i\n", ft_str_is_numeric(str3));
// }
