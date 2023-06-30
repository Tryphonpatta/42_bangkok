/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 01:33:16 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/14 01:48:26 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	str_cmp(char *a, char *b)
{
	while (*a && *b && (*a == *b))
	{
		a ++;
		b ++;
	}
	return (*a - *b);
}

int	str_len(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i ++;
	return (i);
}

void	print(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1, argv[i], str_len(argv[i]));
		write(1, "\n", 1);
		i ++ ;
	}
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (str_cmp(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j ++;
		}
		i ++;
	}
	print(argc, argv);
}
