/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntanajar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:55:27 by ntanajar          #+#    #+#             */
/*   Updated: 2023/06/14 14:05:20 by ntanajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_program_name(char *name)
{
	while (*name)
	{
		write(1, name, 1);
		name++;
	}
	write(1, "\n", 1);
}

int	main(int n, char *args[])
{
	int	i;

	i = n;
	ft_print_program_name(args[0]);
	return (0);
}
