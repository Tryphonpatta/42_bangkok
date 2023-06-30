/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ERROR.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 13:24:28 by vrattana          #+#    #+#             */
/*   Updated: 2023/06/18 20:35:36 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	str_len(char *a);
int	strlenchar(char *a);

int	error_argc(int argc)
{
	char	*x;

	if (argc != 2)
	{
		x = "Error\n";
		write(1, x, strlenchar(x));
		return (0);
	}
	return (1);
}

int	error1number(int n)
{
	if (n == 16 || n == 20 || n == 24 || n == 28 || n == 32 || n == 36)
	{
		return (1);
	}
	else
	{
		write(1, "Error\n", 6);
		return (0);
	}
	return (0);
}

int	spacedigitcheck(char *input)
{
	int		i;

	i = 1;
	if (input[strlenchar(input) - 1] != ' ')
	{
		while (input[i] != '\0')
		{
			if (input[i] == ' ' && input[i - 1] == ' ')
			{
				write(1, "Error\n", 6);
				return (0);
			}
			if (input[i] >= '0' && input[i] <= '9'
				&& input[i - 1] >= '0' && input[i - 1] <= '9')
			{
				write(1, "Error\n", 6);
				return (0);
			}
			i++;
		}
		return (1);
	}
	write(1, "Error\n", 6);
	return (0);
}

int	check_number_size(char *input, int size)
{
	int		i;
	char	max;

	size = size / 4 ;
	max = size + '0';
	i = 0;
	while (input[i] != '\0')
	{
		if ((input[i] < '1' || input[i] > max) && (input[i] != ' '))
		{
			write(1, "Error\n", 6);
			return (0);
		}
		i++;
	}
	return (1);
}
