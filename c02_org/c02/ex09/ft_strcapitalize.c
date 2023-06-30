/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 15:54:59 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/11 17:48:53 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	checksym(char a)
{
	if (a >= 'A' && a <= 'Z')
	{
		return (0);
	}
	else if (a >= 'a' && a <= 'z')
	{
		return (0);
	}
	else if (a >= '0' && a <= '9')
	{
		return (0);
	}
	return (1);
}

void	first(char *str)
{
	if (str[0] <= 'z' && str[0] >= 'a')
	{
		str[0] -= 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 0;
	first(str);
	while (str[index + 1])
	{
		if (checksym(str[index]))
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
			{
				str[index + 1] -= 32;
			}
		}
		else
		{
			if (str[index + 1] >= 'A' && str[index + 1] <= 'Z')
			{
				str[index + 1] += 32;
			}
		}
		index ++;
	}
	return (str);
}

// int	main(void)
// {
// 	char a[10000] = "salut, comment tu vas ? 42mots quarante-deux;";
// 	printf("%s\n",a);
// 	printf("%s",ft_strcapitalize(a));
// }
