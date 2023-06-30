/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:41:46 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/14 10:53:33 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	n;
	int	i;

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
