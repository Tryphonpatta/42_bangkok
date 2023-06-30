/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <vbanlues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 17:49:26 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/26 17:48:32 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "struct.h"
#include "struct2.h"
#include "ft_recur.h"
#include "ft_check_input.h"

void	free_dict(struct s_dict *d)
{
	int	i;
	int	size;

	size = 32;
	i = 0;
	while (i < size)
	{
		free(d[i].str);
		i++;
	}
	free(d);
}

int	ft_print_number(int argc, char **argv, struct s_dict *s)
{
	if (ft_atoi(argv[argc - 1]) == 0)
		ft_putstr(s[0].str);
	else if (ft_atoi(argv[argc - 1]) > 4294967295)
	{
		write(1, "Error\n", 6);
		free_dict(s);
		return (0);
	}
	ft_recur(0, ft_atoi(argv[argc - 1]), s);
	write(1, "\n", 1);
	return (1);
}

int	main(int argc, char **argv)
{
	char			*filename;
	char			*str;
	struct s_dict	*s;
	int				dupkey;
	int				i;

	i = 0;
	dupkey = 0;
	if (ft_check_input(argc, argv) == -1)
		return (0);
	filename = get_file_name(argc, argv);
	str = ft_read_dict(filename);
	free(filename);
	s = make_dict(&i, &dupkey, str);
	free(str);
	if (checks_dict(s) || dupkey || dupvalue(s))
	{
		write(1, "Dict Error\n", 11);
		free_dict(s);
		return (0);
	}
	if (ft_print_number(argc, argv, s) == 0)
		return (0);
	free_dict(s);
	return (0);
}
