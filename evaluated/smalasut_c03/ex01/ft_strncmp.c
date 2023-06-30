/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smalasut <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:49:37 by smalasut          #+#    #+#             */
/*   Updated: 2023/06/14 11:20:12 by smalasut         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n--)
	{
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

/*int main()
{
	char a[] = "asdf", b[] = "";
	int n = 3;
	printf("real : %d\n",strncmp(a,b,n));
	printf("%d",ft_strncmp(a,b,n));
}*/
