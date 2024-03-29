/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 22:41:12 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/12 22:52:33 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	s;

	s = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		s *= nb;
		nb --;
	}
	return (s);
}
