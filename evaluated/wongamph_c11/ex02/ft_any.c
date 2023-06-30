/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <wongamph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 13:13:55 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/27 13:28:18 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while ((tab[i]))
		if (f(tab[i++]))
			return (1);
	return (0);
}

// #include <stdio.h>
// int checks(char *str)
// {
// 	while (*str)
// 		if (*str++ == 's')
// 			return (1);
// 	return (0);
// }
// int main()
// {
// 	char *tab[4] = {"faaa","aresrw","fewf"};
// 	printf("%d",ft_any(tab,&checks));
// }