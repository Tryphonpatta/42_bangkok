/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_dict.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <vbanlues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:57:45 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/26 17:42:43 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_READ_DICT_H
# define FT_READ_DICT_H
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# define BUFFER_SIZE 1024

char	*ft_read_dict(char *file_name)
{
	int		file;
	int		readbyte;
	int		size;
	char	buffer[BUFFER_SIZE];
	char	*str;

	file = open(file_name, O_RDONLY);
	readbyte = read(file, buffer, BUFFER_SIZE);
	size = readbyte;
	while (readbyte > 0)
	{
		readbyte = read(file, buffer, BUFFER_SIZE);
		size += readbyte;
	}
	close(file);
	str = (char *)malloc((size + 1) * sizeof(char));
	file = open(file_name, O_RDONLY);
	readbyte = read(file, str, size);
	close(file);
	str[size] = '\0';
	return (str);
}

int	check_dict_file(char *filename)
{
	int	i;

	i = open(filename, O_RDONLY);
	if (i == -1)
		write(1, "Dict Error\n", 11);
	close(i);
	return (i);
}

#endif