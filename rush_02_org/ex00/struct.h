/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:54:41 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/23 15:14:27 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct dict
{
	int		value;
	char	*str;
};

int str_len(char *c)
{
	int	i;

	i = 0;
	while(c[i] && c[i] != ' ' && c[i] != '\n')
		i ++;
	return (i);
}

struct dict	*make_dict(char *str, struct dict *dic)
{
	int	i;

	i = 0;
	while (*str)
	{

		while(*str != '\n')
		{

		}
	}
}