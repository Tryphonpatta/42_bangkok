/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 16:16:50 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/13 16:16:54 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		++len;
		++i;
	}
	return (len);
}

// int main(void)
// {
//     char *str;
//     str = "HELLO WORLD";
//     int len = ft_strlen(str);

//     printf("%i", len);

//     return 0;
// }
