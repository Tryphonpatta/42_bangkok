/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chchartp <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 09:28:29 by chchartp          #+#    #+#             */
/*   Updated: 2023/06/13 10:48:18 by chchartp         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (x < n)
	{
		if (s1[x] > s2[x])
		{
			return (1);
		}
		else if (s1[x] < s2[x])
		{
			return (-1);
		}
		x++;
	}
	return (0);
}

/*int	main(void)
{
	char	str1[] = "24457";
	char	str2[] = "42";
	unsigned int	n;
	int	cmp;

	n = 2;
	cmp = ft_strncmp(str1, str2, n);
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
