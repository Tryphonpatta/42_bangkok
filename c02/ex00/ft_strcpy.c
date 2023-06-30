/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 12:46:57 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/11 20:49:28 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	size;

	size = 0;
	while (*src != '\0')
	{
		*dest = *src ;
		dest ++;
		src ++;
		size ++;
	}
	*dest = '\0';
	return (dest - size);
}

// int	main(void)
// {
//  	char *a,*b;
//  	a = "helloeveryoen";
//  	b = ft_strcpy(b,a);
//  	printf("%s",b);
//  	// printf("%s %s",b,a);
// }
