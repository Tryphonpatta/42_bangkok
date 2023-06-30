/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <wongamph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:29:12 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/27 13:41:25 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = -1;
	while (++i < length)
		if (f(tab[i]))
			count++;
	return (count);
}

// #include <stdio.h>
// int checks(char *str)
// {
// 	if (str == NULL)
// 		return (0);
// 	while (*str)
// 		if (*str++ == 's')
// 			return (1);
// 	return (0);
// }
// int main()
// {
//     char *tab[5] = {"afefs","sss","kkk","fefs",NULL};

//     printf("%d",ft_count_if(tab,5,&checks));
// }