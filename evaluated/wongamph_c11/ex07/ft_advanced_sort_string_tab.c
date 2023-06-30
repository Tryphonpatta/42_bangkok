/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <wongamph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:26:48 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/28 18:45:54 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
{
	int	size;
	int	i;
	int	j;

	size = 0;
	while (tab[size])
		size++;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
				swap(tab + j, tab + j + 1);
			j++;
		}
		i++;
	}
}

// #include <stdio.h>
// int	main()
// {
// 	char *tab[4] = {"aaaaa", "ab", "123",NULL};
// 	ft_advanced_sort_string_tab(tab,&ft_strcmp);
// 	printf("%s\n",tab[0]);
// 	printf("%s\n",tab[1]);
// 	printf("%s",tab[2]);
// }