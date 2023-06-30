/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 02:01:07 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/28 15:33:27 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>


void	read_file(char *ad)
{
	int		fd;
	char	text[30000];
	int		i;

	i = 0;
	fd = open(ad, O_RDONLY);
	if (fd == -1)
	{
		write(1, "Cannot read file.\n", 17);
		return ;
	}
	while (read(fd, text, 30000))
	{
		i = 0;
		while (text[i])
		{
			write(1, &text[i], 1);
			i++;
		}
	}
	close(fd);
}

int	main(int i, char **a)
{
	if (i <= 1)
	{
		write(1, "File name missing.\n", 20);
		return (0);
	}
	if (i > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (0);
	}
	read_file(a[1]);
}
