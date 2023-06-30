/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:48:04 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/13 20:58:50 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	str_len(char *c)
{
	int	i;

	i = 0;
	while (c[i])
	{
		i ++;
	}
	return (i);
}

int	main(int n, char **a)
{
	n = 1;
	write(1, a[0], str_len(a[0]));
	write(1, "\n", 1);
}
