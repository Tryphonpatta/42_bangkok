/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 20:51:40 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/13 21:55:08 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		++len;
	}
	return (len);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (i < ft_strlen(str))
	{
		if ((32 <= str[i] && str[i] <= 126))
		{
			write(1, &str[i], 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &"0123456789abcdef"[str[i] / 16], 1);
			write(1, &"0123456789abcdef"[str[i] % 16], 1);
		}
		++i;
	}
}

/*int main(void)
{
	char *str = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);

	return 0;
}*/
