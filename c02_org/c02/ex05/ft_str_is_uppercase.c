/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 14:54:10 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/09 15:03:01 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str ++;
	}
	return (1);
}

/*int	main(void)
{
	printf("%d",ft_str_is_numeric("9035"));
}*/
