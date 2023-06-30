/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 18:21:36 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/14 00:38:14 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	change(int b)
{
	if (b < 10)
	{
		return (b + '0');
	}
	return (b - 10 + 'a');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	int				b;
	int				f;
	unsigned char	cur;

	i = 0;
	while (str[i] != '\0')
	{
		cur = str[i];
		if (str[i] < 32 || str[i] >= 127)
		{
			b = cur % 16;
			f = cur / 16;
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[f]);
			ft_putchar("0123456789abcdef"[b]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

int main(void){
	char st[10] = {0,3};
 	scanf("%s", st);
 	printf("%c \n",st[0]);
 	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}
