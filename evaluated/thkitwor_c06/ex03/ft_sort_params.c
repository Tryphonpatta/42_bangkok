/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:54:46 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/15 00:10:22 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort(int n, char **a)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < n - 1)
	{
		j = i + 1;
		while (j < n)
		{
			if (ft_strcmp(a[i], a[j]) > 0)
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	n;
	int	i;

	ft_sort(argc, argv);
	n = 1;
	while (n < argc)
	{
		i = 0;
		while (argv[n][i] != '\0')
		{
			write(1, &argv[n][i], 1);
			i++;
		}
		write(1, "\n", 1);
		n++;
	}
}
