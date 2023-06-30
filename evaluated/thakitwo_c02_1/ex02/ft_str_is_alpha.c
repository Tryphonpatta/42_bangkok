/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:30:38 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/09 15:33:19 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
		{
			i++;
			continue ;
		}
		else if (str[i] <= 'z' && str[i] >= 'a')
		{
			i++;
			continue ;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

// int	main(void)
// {
// 	char	a[100] = {"jdwjl$%$^$^"};
// 	int 	ans;

// 	ans = ft_str_is_alpha(a);
// 	printf("%d",ans);
// }
