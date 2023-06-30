/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 04:18:11 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/09 05:01:21 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	l;
	int	r;
	int	t;

	r = size - 1;
	l = 0;
	while (l < r)
	{
		t = *(tab + l);
		*(tab + l) = *(tab + r);
		*(tab + r) = t;
		l ++;
		r --;
	}
}

/*int	main(void)
{
	int a[3] = {1,2,3};
	ft_rev_int_tab(a,3);
	printf("%d %d %d",a[0],a[1],a[2]);
}*/
