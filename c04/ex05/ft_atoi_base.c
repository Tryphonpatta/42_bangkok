/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:29:32 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/12 18:31:10 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	check(char c)
{
	if (c == '\f' || c == '\n' || c == '\t')
		return (1);
	if (c == '\v' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	str_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i ++;
	}
	return (i);
}

int	checkbase(char *b)
{
	int	i;
	int	j;

	i = 0 ;
	if (str_len(b) <= 1)
	{
		return (0);
	}
	while (i < str_len(b))
	{
		j = i + 1;
		if (b[i] == '+' || b[i] == '-' || b[i] == ' ')
		{
			return (0);
		}
		while (j < str_len(b))
		{
			if (b[i] == b[j])
				return (0);
			j ++;
		}
		i ++;
	}
	return (1);
}

int	find_base(char str, char *base)
{
	int	index;

	index = 0;
	while (base[index] != str)
	{
		index ++;
	}
	return (index);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sum;
	int	d;

	if (!checkbase(base))
		return (0);
	sum = 0;
	d = 0;
	while (*str && (check(*str)))
		str++;
	while (*str && (*str == '-' || *str == '+'))
	{
		if (*str == '-')
			d ++;
		str ++;
	}
	while (*str)
	{
		sum *= str_len(base);
		sum += find_base(*str, base);
		str ++;
	}
	if (d % 2 == 1)
		sum *= -1;
	return (sum);
}

// int main(void)
// {
// 	printf("%d",ft_atoi_base("    offffffffff","poneyvif"));
// }