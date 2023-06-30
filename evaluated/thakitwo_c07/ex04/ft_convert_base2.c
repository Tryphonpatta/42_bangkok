/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 17:31:05 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/20 23:40:30 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base);
int	checkbase(char *str);
int	ft_strlen(char *str);

void	basefind(int co, char *base, long long int nbr, char *arr)
{
	int		n;
	int		h;

	n = ft_strlen(base);
	co = co - 1;
	if (nbr < 0)
	{
		arr[0] = '-';
		co++;
		nbr *= -1;
	}
	h = co;
	while (nbr >= n)
	{
		arr[co] = base[nbr % n];
		co--;
		nbr = nbr / n;
	}
	arr[co] = base[nbr];
	arr[h + 1] = '\0';
}

int	findnb(int nb, char *base)
{
	int	n;
	int	l;
	int	co;

	n = 1;
	l = ft_strlen(base);
	co = 0;
	if (nb < 0)
		nb *= -1;
	while (n < nb + 1)
	{
		n *= l;
		co++;
	}
	return (co);
}

void	ft_putnbr_base(int nbr, char *base, char *arr, int co)
{
	int				n;
	long long int	i;

	i = nbr;
	n = ft_strlen(base);
	if (n == 0 || n == 1)
		return ;
	basefind(co, base, i, arr);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		ans;
	char	*arr;

	if (checkbase(base_from) || checkbase(base_to))
	{
		return (NULL);
	}
	ans = ft_atoi_base(nbr, base_from);
	if (ans == 0)
	{
		arr[0] = '0';
		arr[1] = '\0';
		return (arr);
	}
	arr = (char *)malloc(sizeof(char) * (findnb(ans, base_to) + 2));
	ft_putnbr_base(ans, base_to, arr, findnb(ans, base_to));
	return (arr);
}
// #include<stdio.h>
// int main()
// {
// 	printf("%s",ft_convert_base("1","0123456789","8923456"));
// }