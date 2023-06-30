/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setmyindex.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ptantiam <ptantiam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 18:19:46 by ptantiam          #+#    #+#             */
/*   Updated: 2023/06/18 18:33:14 by ptantiam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "struct_index.h"

void	setmyindex(struct s_index *myindex, int i, int j, int k)
{
	myindex->i = i;
	myindex->i = j;
	myindex->v = k;
}
