/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_value.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbanlues <vbanlues@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:31:25 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/26 17:42:41 by vbanlues         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHECK_VALUE_H
# define FT_CHECK_VALUE_H
# include <unistd.h>

int	is_white_space(char c)
{
	if (c == '\f' || c == '\n' || c == '\t')
		return (1);
	if (c == '\v' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	is_zero(char c)
{
	if (c == '0')
		return (1);
	return (0);
}

int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_check_value(char *str)
{
	int	i;
	int	digit;

	i = 0;
	digit = 0;
	while (is_white_space(str[i]))
		i++;
	while (is_zero(str[i]))
	{
		if (str[i + 1] != '0' && !is_num(str[i + 1]))
			digit++;
		i++;
	}
	while (is_num(str[i]))
	{
		i++;
		digit++;
	}
	while (is_white_space(str[i]))
		i++;
	if (str[i] == '\0' && digit != 0 && digit <= 10)
		return (1);
	write(1, "Error\n", 6);
	return (-1);
}

#endif