/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 03:26:39 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/25 02:05:00 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H_H
# define FT_H_H

# include <unistd.h>

int		ft_add(int a, int b);
int		check(char c);
int		ft_atoi(char *str);
int		ft_divide(int a, int b);
int		ft_minus(int a, int b);
int		ft_modulo(int a, int b);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_multiply(int a, int b);

#endif