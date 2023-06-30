/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thkitwor <thkitwor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:14:37 by thkitwor          #+#    #+#             */
/*   Updated: 2023/06/14 02:45:09 by thkitwor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_space(char c)
{
	if (c == ' ' || c == '\f')
	{
		return (1);
	}
	else if (c == '\n' || c == '\r')
	{
		return (1);
	}
	else if (c == '\t' || c == '\v')
	{
		return (1);
	}
	return (0);
}

int	check_base(char *b)
{	
	int	i;
	int	j;

	if (ft_strlen(b) < 2)
	{
		return (1);
	}
	i = 0;
	while (b[i] != '\0')
	{
		j = i + 1;
		while (b[j] != '\0')
		{
			if (b[i] == b[j])
			{
				return (1);
			}
			j++;
		}
		if (b[i] == '+' || b[i] == '-' || check_space(b[i]))
			return (1);
		i++;
	}
	return (0);
}

int	base_int(int c, char *str, char *base)
{
	int	ans;
	int	i;

	ans = 0;
	while (*str)
	{
		i = 0;
		while (base[i] != '\0')
		{
			if (*str == base[i])
			{
				ans = ans * ft_strlen(base);
				ans += i * c;
				break ;
			}
			i++;
		}
		if (base[i] == '\0')
		{
			return (ans);
		}
		str++;
	}
	return (ans);
}

int	ft_atoi_base(char *str, char *base)
{
	int	c;

	c = 0;
	if (check_base(base))
	{
		return (0);
	}
	while (check_space(*str))
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			c ++;
		str++;
	}
	if (c % 2 == 0)
		c = base_int(1, str, base);
	else
		c = base_int(-1, str, base);
	return (c);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%d",ft_atoi_base("\n\n\n\f  +-+ --npppppppppp ffff", "poneyvif"));
// }
