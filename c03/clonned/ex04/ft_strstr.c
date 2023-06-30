/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 13:55:59 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/12 11:09:28 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
// #include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	a;

	j = 0;
	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		j = 0;
		a = i;
		while (str[a] == to_find[j])
		{
			a ++;
			j ++;
			if (!to_find[j])
			{
				return (str + i);
			}
		}
		i ++;
	}
	return (0);
}

// int main(void)
// {
// 	char *a = "p";
// 	char *b = "B";
// 	printf("%s",ft_strstr(a,b));
// }