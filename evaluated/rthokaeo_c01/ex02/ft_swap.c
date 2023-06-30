/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthokaeo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 15:50:36 by rthokaeo          #+#    #+#             */
/*   Updated: 2023/06/11 15:36:27 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

//int	main(void)
//{
//	int	j;
//	int	k;
//
//	j = 20;
//	k = 123;
//	printf("This Is j : %d, This is k : %d\n", j, k);	
//	ft_swap(&j,&k);
//	printf("This Is j : %d, This is k : %d\n", j, k);
//	return 0;
//}
