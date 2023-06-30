/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:53:06 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/14 01:52:08 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *a)
{
	int	i;

	i = 0;
	while (a[i])
	{
		i ++;
	}
	return (i);
}

int	main(int n, char **a)
{
	int	i;

	i = 1;
	while (i < n)
	{
		write(1, a[i], str_len(a[i]));
		write(1, "\n", 1);
		i ++;
	}
}
