/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:34:42 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/23 14:39:36 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

# define Path "numbers.dict"

struct dict
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
	printf("%d\n",fd);
	read(fd, text, 30000);
	while(text[i])
	{
		write(1, &text[i], 1);
		i++;
	}
	close(fd);
	
}

int	main(void)
{
	read_file(Path);
}