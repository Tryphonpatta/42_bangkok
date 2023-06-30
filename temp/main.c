/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:49:26 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/24 22:11:56 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "check.h"
#include "struct.h"

int	check_dict(char *filename)
{
	int	i;

	i = open(filename, O_RDONLY);
	close(filename);
	if (i == -1)
		printf("Dict Error\n");
	return (i);
}

int	main(int argc, char **argv)
{
	char    		*filename;
	char			*str;
	struct s_dict 	*s;
	int				input_digit;
	long long int	num;

	if (argc == 2)
		input_digit = ft_check_input(argv[1]);
	else if (argc == 3)
		input_digit = ft_check_input(argv[2]);
	else
		printf("Error\n");
	if (input_digit == -1 || check_dict(filename))
		return (0);
	
	str = ft_get_str(filename);
    s = make_dict(str);
	num = ft_atoi(argv[2])
	ft_recur(33333133,s);
}