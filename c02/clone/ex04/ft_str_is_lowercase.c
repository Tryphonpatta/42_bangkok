/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:52:02 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/09 15:06:58 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
		{
			return (0);
		}
		str ++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d",ft_str_is_lowercase("9035"));
}*/
