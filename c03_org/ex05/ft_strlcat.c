/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 14:49:04 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/12 20:47:19 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
int	str_len(char *x)
{
	int	i;

	i = 0;
	while (x[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len;
	unsigned int	i;
	unsigned int	s;

	s = 0;
	len = str_len(dest);
	dest = dest + len;
	if (size <= len)
		return (size + len);
	i = size - len -1;
	while (*src)
	{
		if (i > 0)
		{
			*dest = *src;
			i--;
			dest ++;
		}
		src ++;
		s ++;
	}
	*dest = '\0';
	return (len + s);
}

// int main(){
// 	char a[20] = "Hellooooo",b[20] = "Hellooooo";
// 	char *c = "worldddddddddddd",*d = "worldddddddddddd";
// 	char *e,*f;
// 	int n = ft_strlcat(a,c,5);
// 	int m = strlcat(b,d,5);
// 	printf("%d %d",n,m);
// 	printf("%s %s",a,b);
// }