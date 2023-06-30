/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:57:46 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/09 15:16:35 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 127)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	char a[2] = {20,21};
	printf("%d",ft_str_is_printable(a));
}*/
