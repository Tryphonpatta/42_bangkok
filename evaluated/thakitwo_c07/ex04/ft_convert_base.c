/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thakitwo <thakitwo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 16:45:59 by thakitwo          #+#    #+#             */
/*   Updated: 2023/06/17 17:37:33 by thakitwo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>
int	checkbase(char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (str[i])
	{
		j = i + 1;
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
			return (1);
		if (str[i] == '+' || str[i] == '-')
			return (1);
		if (!(str[i]))
			break ;
		while (str[j])
		{
			if (str[i] == str[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check(char str, char *base)
{
	int	i;

	i = 0;
	while (*base)
	{
		if (str == *base)
			return (i);
		base++;
		i++;
	}
	return (-1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	change(char *str, char *base, int pn)
{
	long long int	i;
	int				co;
	int				ans;

	ans = 0;
	i = 1;
	co = 0;
	while (check(str[co], base) != -1)
	{
		i *= ft_strlen(base);
		co++;
	}
	i /= ft_strlen(base);
	while (co--)
	{
		if (pn < 0)
			ans -= check(*str, base) * i;
		if (pn > 0)
			ans += check(*str, base) * i;
		i /= ft_strlen(base);
		str++;
	}
	return (ans);
}

int	ft_atoi_base(char *str, char *base)
{
	int	nstr;
	int	nbase;
	int	pn;

	pn = 1;
	nstr = ft_strlen(str);
	nbase = ft_strlen(base);
	if (nbase < 2)
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			pn *= -1;
		str++;
	}
	return (change(str, base, pn));
}
/*
#include<stdio.h>
int main()
{
	
    printf("1: %d\n", ft_atoi_base("1010", "01")); //10
    printf("2: %d\n", ft_atoi_base("-1010", "01")); //-10
    printf("3: %d\n", ft_atoi_base("   -1010", "01")); //-10
    printf("4: %d\n", ft_atoi_base("+7", "0123456789")); //7
    printf("5: %d\n", ft_atoi_base("AB", "0123456789ABCDEF")); //171
    printf("6: %d\n", ft_atoi_base("11111111", "01")); //255
    printf("7: %d\n", ft_atoi_base("XYZ", "")); //0 (invalid)
    printf("8: %d\n", ft_atoi_base("XYZ", "X")); //0 (invalid)
    printf("9: %d\n", ft_atoi_base("XYZ", "X+")); //0 (invalid)
    printf("10: %d\n", ft_atoi_base("XYZ", "XYX")); //0 (invalid)
    printf("11: %d\n", ft_atoi_base("XYZ", "XYZ-")); //0 (invalid)
    printf("12: %d\n", ft_atoi_base("XYZ", "  XYZ")); //0 (invalid)
    printf("13: %d\n", ft_atoi_base("", "01")); //0 (empty string)

}*/