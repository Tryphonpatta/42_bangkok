/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snetrasi <snetrasi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 21:31:25 by snetrasi          #+#    #+#             */
/*   Updated: 2023/06/24 22:12:00 by snetrasi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_H
# define CHECK_H

int is_white_space(char c)
{
	if (c == ' ')
		return (1);
	return (0);
}

int is_zero(char c)
{
	if (c == '0')
		return (1);
	return (0);
}

int is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_check_input(char *str)
{
	int	i;
	int	j;
	int	digit;

	i = 0;
	while (is_white_space(str[i]))
		i++;
	while (is_zero(str[i]))
		i++;
	if (is_num(str[i]))
		j = i;
	while (is_num(str[i]))
	{
		i++;
		digit++;
	}
	while (is_white_space(str[i]))
		i++;
	if (str[i] == '\0' && digit != 0 && digit <= 10)
		return (j);
	printf("Error\n");
	return (-1);
}

#endif