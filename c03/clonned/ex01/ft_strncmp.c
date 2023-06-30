/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 12:30:03 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/11 12:53:11 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
// #include<string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n <= 0)
	{
		return (0);
	}
	while (n > 0 && (*s1 && *s2 && *s1 == *s2))
	{
		n--;
		s1++;
		s2++;
	}
	if (n == 0)
	{
		return (*(s1 - 1) - *(s2 - 1));
	}
	return (*s1 - *s2);
}

// int main(void)
// {
// 	char *a = "Heating" , *b = "Heater";
// 	// printf("%d",ft_strncmp(a,b,6));
// 	// printf("%d",strncmp(a,b,4));
// }
