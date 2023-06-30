/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsathipp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:02:41 by nsathipp          #+#    #+#             */
/*   Updated: 2023/06/12 22:02:46 by nsathipp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*to_return(char *to_find, char *x)
{
	if (*to_find == '\0')
		return (x);
	else
		return (0);
}

int	check_key(char *b)
{
	if (*b == 'y')
	{
		*b = 'n';
		return (1);
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	b;
	char	*x;

	a = to_find;
	b = 'y';
	x = str;
	while (*str != '\0' && *to_find != '\0')
	{
		if (*str == *to_find)
		{
			if (check_key(&b))
				x = str;
			to_find++;
		}
		else
		{
			if (*to_find != '\0')
				to_find = a;
			b = 'y';
		}
		str++;
	}
	return (to_return(to_find, x));
}

// int	main(void)
// {
// 	char	a[] = "Hellk Worllok";
// 	char	b[4] = "";
// 	printf("%s", ft_strstr(a,b));
// }