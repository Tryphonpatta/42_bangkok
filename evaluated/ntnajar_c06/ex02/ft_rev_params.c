/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntanajar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:12:15 by ntanajar          #+#    #+#             */
/*   Updated: 2023/06/19 21:20:49 by ntanajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_params(char *arg)
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
	while (--n > 0)
		ft_rev_params(args[n]);
	return (0);
}
