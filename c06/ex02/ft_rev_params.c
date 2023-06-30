/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 01:26:20 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/14 01:32:16 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	str_len(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i ++;
	return (i);
}

int	main(int argc, char **argv)
{
	while (argc > 1)
	{
		write(1, argv[argc - 1], str_len(argv[argc - 1]));
		write(1, "\n", 1);
		argc --;
	}
	return (0);
}
