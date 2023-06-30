/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntanajar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:05:54 by ntanajar          #+#    #+#             */
/*   Updated: 2023/06/14 14:11:14 by ntanajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char *arg)
{
	while (*arg)
	{
		write(1, arg, 1);
		arg++;
	}
	write(1, "\n", 1);
}

int	main(int n, char *args[])
{
	int	i;
	int	j;

	i = n;
	j = 1;
	while (args[j])
	{
		ft_print_params(args[j]);
		j++;
	}
	return (0);
}
