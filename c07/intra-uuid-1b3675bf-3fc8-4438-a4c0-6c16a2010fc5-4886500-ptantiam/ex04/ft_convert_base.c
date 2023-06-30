/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 00:57:57 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/16 17:59:29 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int		find_length(long long int nbr, char *base);
int		str_len(char *a);
int		checkwhite(char c);
char	checkbase(char *c);

int	find_index(char a, char *base)
{
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == a)
			return (index);
		index ++;
	}
	return (-1);
}

void	rebase(long long int nbr, char *base, int base_l, char *b)
{
	if (nbr < 0)
	{
		b[0] = '-';
		nbr *= -1;
	}
	b[base_l] = '\0';
	while (nbr >= str_len(base))
	{
		b[--base_l] = base[nbr % str_len(base)];
		nbr /= str_len(base);
	}
	if (nbr >= 0)
		b[--base_l] = base[nbr];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long long int		a;
	char				*b;
	int					d;
	int					i;

	a = 0;
	d = 1;
	i = 0;
	if (checkbase(base_from) || checkbase(base_to))
		return (0);
	while (nbr[i] && checkwhite(nbr[i]))
		i ++;
	while (nbr[i] && (nbr[i] == '-' || nbr[i] == '+'))
	{
		if (nbr[i++] == '-')
			d *= -1;
	}
	while (nbr[i] && find_index(nbr[i], base_from) != -1)
		a = a * str_len(base_from) + find_index(nbr[i++], base_from);
	if (d == -1)
		a *= -1;
	b = (char *)malloc(find_length(a, base_to) + 1);
	rebase(a, base_to, find_length(a, base_to), b);
	return (b);
}

// int main(void)
// {
// 	printf("%s",ft_convert_base("f","fo","Vd[/%qvE"));
// }