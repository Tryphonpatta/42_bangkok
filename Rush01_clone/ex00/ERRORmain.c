/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ERRORmain.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:56:49 by vrattana          #+#    #+#             */
/*   Updated: 2023/06/18 20:36:04 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	str_len(char *a);
int	strlenchar(char *a);
int	error_argc(int argc);
int	error1number(int n);
int	spacedigitcheck(char*input);
int	check_number_size(char*input, int size);

int	finalbosserror(int argc, char *argv)
{
	if (error_argc(argc) == 0
		|| spacedigitcheck(argv) == 0
		|| error1number(str_len(argv)) == 0
		|| check_number_size(argv, str_len (argv)) == 0)
	{
		return (0);
	}
	return (1);
}
