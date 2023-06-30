/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:18:17 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/09 15:30:29 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*s;

	s = str;
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str += 'A' - 'a';
		}
		str++;
	}
	return (s);
}

// int	main(void)
// {
// 	char	*a;
// 	char	b[10] = "-asdgjHHk";

// 	a = ft_strupcase(b);
// 	while (*a != '\0')
// 	{
// 		printf("%c",*a);
// 		a++;
// 	}
// }
