/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pracksaw <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 21:54:33 by pracksaw          #+#    #+#             */
/*   Updated: 2023/06/13 23:39:44 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	ii;

	i = 0;
	ii = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (ii == 1)
				str[i] -= 32;
		ii = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			ii = 0;
		else
			ii = 1;
		i++;
	}
	return (str);
}

int main(void)
{
    char str0[] = "salut, comment tu vas ? 42mots quarante-deux; c+et+un";
    char str4[] = "LOREM IPSUM";
   
    printf("Original: %s\n", str0);
    printf("Capitalize: %s\n\n", ft_strcapitalize(str0));
   
    printf("Original: %s\n", str4);
    printf("Capitalized: %s\n\n", ft_strcapitalize(str4));

    return 0;
}
