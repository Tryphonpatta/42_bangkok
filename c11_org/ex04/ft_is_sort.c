/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 13:00:36 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/25 16:55:23 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	status;

	i = 0;
	status = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			status = 0;
		i ++;
	}
	if (status == 0)
	{
		i = 0;
		while (i < length -1)
		{
			if (f(tab[i], tab[i + 1]) < 0)
				return (0);
			i ++;
		}
	}
	return (1);
}
