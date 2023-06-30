/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 13:59:25 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/12 10:47:37 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while (src[index] && index < n)
	{
		dest[index] = src[index];
		index ++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index ++;
	}
	return (dest);
}

// int 	main(void)
// {
// 	char a[] = "amkeeeeeeee ", b[] = "Hellodd", *e, *f;
// 	char c[] = "amkeeeeeeee", d[] = "Hellodd";
// 	e = ft_strncpy(a,b,6);
// 	f = strncpy(c,d,6);
// 	printf("%s\n%s",e,f);
// }
