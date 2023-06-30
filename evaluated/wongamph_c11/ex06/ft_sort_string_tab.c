/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wongamph <wongamph@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:03:58 by wongamph          #+#    #+#             */
/*   Updated: 2023/06/27 16:29:46 by wongamph         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

void	ft_sort_string_tab(char **tab)
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
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[i], tab[j]) > 0)
				swap(tab + i, tab + j);
			j++;
		}
		i++;
	}
}
// #include <stdio.h>
// int	main()
// {
// 	char *tab[4] = {"abcde", "aaaaa", "123",NULL};
// 	ft_sort_string_tab(tab);
// 	printf("%s\n",tab[0]);
// 	printf("%s\n",tab[1]);
// 	printf("%s",tab[2]);
// }