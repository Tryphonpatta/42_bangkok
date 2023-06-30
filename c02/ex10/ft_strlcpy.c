/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 17:01:53 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/11 23:20:04 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

int	str_len(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	finish;

	index = 0;
	finish = 0;
	if (!size)
	{
		return (str_len(src));
	}
	while (src[index])
	{
		if (index < size - 1)
		{
			dest[index] = src[index];
			finish ++;
		}
		index ++;
	}
	dest[finish] = '\0';
	return (index);
}

// int main(void)
// {
// 	char b[] = "aaaaaaaaaaaaaa",a[] = "aaaaaaaaaaaaaa";
// 	char c[] = "abcdefghij"; //13
// 	char d[] = "abcdefghij"; //13

// 	int e = ft_strlcpy(a,c,12);
// 	printf("%d\n",e);
// 	printf("%s\n",a);

// 	int f = strlcpy(b,d,12);
// 	printf("%d\n",f);
// 	printf("%s",b);
// }
