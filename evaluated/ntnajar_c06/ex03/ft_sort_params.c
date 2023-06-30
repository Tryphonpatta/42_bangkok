/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntanajar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:19:29 by ntanajar          #+#    #+#             */
/*   Updated: 2023/06/20 21:31:47 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(int n, char *args[])
{
	char	*temp;
	int		i;
	int		j;

	i = 1;
	while (i < n)
	{
		j = i + 1;
		while (j < n)
		{
			if (ft_strcmp(args[i], args[j]) > 0)
			{
				temp = args[i];
				args[i] = args[j];
				args[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	print(int n, char *args[])
{
	int	i;

	i = 1;
	while (i < n)
	{
		while (*args[i])
		{
			write(1, args[i], 1);
			args[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	main(int n, char *args[])
{
	ft_sort_params(n, args);
	print(n, args);
	return (0);
}
