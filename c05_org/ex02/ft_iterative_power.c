/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:54:16 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/12 22:55:36 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	if (power < 0)
		return (0);
	ans = 1;
	while (power --)
	{
		ans *= nb;
	}
	return (ans);
}
