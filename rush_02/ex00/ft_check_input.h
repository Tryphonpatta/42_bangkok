/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_input.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <vbanlues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 13:39:27 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/26 17:42:41 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECK_INPUT_H
# define FT_CHECK_INPUT_H
# include <unistd.h>
# include "ft_check_value.h"
# include "ft_read_dict.h"

int	ft_check_input(int argc, char **argv)
{
	int	i;
	int	input_digit;

	input_digit = -1;
	if (argc == 2)
		i = check_dict_file("numbers.dict");
	else if (argc == 3)
		i = check_dict_file(argv[1]);
	else
	{
		i = -1;
		write(1, "Error\n", 6);
	}
	if (i == -1)
		return (-1);
	if (argc == 2)
		input_digit = ft_check_value(argv[1]);
	else if (argc == 3)
		input_digit = ft_check_value(argv[2]);
	return (input_digit);
}

char	*ft_strdup(char *str)
{
	int			i;
	char		*dest;

	i = 0;
	while (str[i])
		i++;
	dest = (char *)malloc((i + 1) * sizeof(char));
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*get_file_name(int argc, char **argv)
{
	char	*filename;

	if (argc == 2)
		filename = ft_strdup("numbers.dict");
	else
		filename = ft_strdup(argv[1]);
	return (filename);
}

#endif