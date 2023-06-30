/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moetienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 21:19:27 by moetienn          #+#    #+#             */
/*   Updated: 2023/06/08 22:49:31 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main()
{
	int	*********nbr;
	int	********nbr8;
	int	*******nbr7;
	int	******nbr6;
	int	*****nbr5;
	int	****nbr4;
	int	***nbr3;
	int	**nbr2;
	int	*nbr1;
	int	numb;

	nbr1 = &numb;
	nbr2 = &nbr1;
	nbr3 = &nbr2;
	nbr4 = &nbr3;
	nbr5 = &nbr4;
	nbr6 = &nbr5;
	nbr7 = &nbr6;
	nbr8 = &nbr7;
	nbr = &nbr8;

	ft_ultimate_ft(nbr);
	printf("%d\n", numb);
	return(0);
}
