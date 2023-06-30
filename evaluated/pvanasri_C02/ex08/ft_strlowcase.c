/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:40:14 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/13 17:41:25 by pvanasri         ###   ########.fr       */
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

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if ((65 <= str[i] && str[i] <= 90))
		{
			str[i] += 32;
		}
		++i;
	}
	return (str);
}

// int main(void)
// {
//     char str1[] = "ABCdsioaDdasjAEF";
//     char *str2;

//     str2 = ft_strlowcase(str1);

//     printf("%s\n", str2);

//     return 0;
// }
