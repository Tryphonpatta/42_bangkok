/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchartp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 08:58:44 by chchartp          #+#    #+#             */
/*   Updated: 2023/06/14 10:38:30 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] != '\0' || s2[x] != '\0')
	{
		if (s1[x] > s2[x])
		{
			return (s1[x] - s2[x]);
		}
		else if (s1[x] < s2[x])
		{
			return (s1[x] - s2[x]);
		}
		x++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "234";
	char	str2[] = "42";
	int	cmp;

	cmp = ft_strcmp(str1, str2);
	if (cmp > 0)
	{
		write (1, "1 > 2", 5);
	}
	else if (cmp < 0)
	{
		write (1, "1 < 2", 5);
	}
	else
	{
		write (1, "1 = 2", 5);
	}
}*/
