/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvanasri <pvanasri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 16:40:52 by pvanasri          #+#    #+#             */
/*   Updated: 2023/06/20 13:06:38 by pvanasri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	n;

	if (nb <= 1)
		return (0);
	n = 2;
	while (n <= nb / n)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

/*
#include <stdio.h>
int main()
{
    printf("%d -> %d\n", -1868, ft_find_next_prime(-1868));
    printf("%d -> %d\n", 0, ft_find_next_prime(0));
    printf("%d -> %d\n", 1, ft_find_next_prime(1));
    printf("%d -> %d\n", 2, ft_find_next_prime(2));
    printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
    printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
    printf("%d -> %d\n", 2147483643, ft_find_next_prime(2147483643));
    printf("%d -> %d\n", 2147483645, ft_find_next_prime(2147483645));
    printf("%d -> %d\n", 2147483646, ft_find_next_prime(2147483646));
    printf("%d -> %d\n", 2147483647, ft_find_next_prime(2147483647));
    printf("%d -> %d\n", 203785, ft_find_next_prime(203785));
    printf("%d -> %d\n", 14357, ft_find_next_prime(14357));
    printf("%d -> %d\n", 389654, ft_find_next_prime(389654));
    printf("%d -> %d\n", 356376, ft_find_next_prime(356376));
    printf("%d -> %d\n", 111641, ft_find_next_prime(111641));
    printf("%d -> %d\n", 139803, ft_find_next_prime(139803));
    printf("%d -> %d\n", 98368, ft_find_next_prime(98368));
    printf("%d -> %d\n", 172597, ft_find_next_prime(172597));
    printf("%d -> %d\n", 178697, ft_find_next_prime(178697));
    printf("%d -> %d\n", 295994, ft_find_next_prime(295994));
    printf("%d -> %d\n", 66107, ft_find_next_prime(66107));
    printf("%d -> %d\n", 348224, ft_find_next_prime(348224));
    printf("%d -> %d\n", 424018, ft_find_next_prime(424018));
    printf("%d -> %d\n", 182868, ft_find_next_prime(182868));
    printf("%d -> %d\n", 279638, ft_find_next_prime(279638));
    printf("%d -> %d\n", 215132, ft_find_next_prime(215132));
    printf("%d -> %d\n", 130734, ft_find_next_prime(130734));
    printf("%d -> %d\n", 254567, ft_find_next_prime(254567));
    printf("%d -> %d\n", 287850, ft_find_next_prime(287850));
    printf("%d -> %d\n", 101486, ft_find_next_prime(101486));
    printf("%d -> %d\n", 338034, ft_find_next_prime(338034));
    printf("%d -> %d\n", 367221, ft_find_next_prime(367221));
    printf("%d -> %d\n", 352888, ft_find_next_prime(352888));
    printf("%d -> %d\n", 296057, ft_find_next_prime(296057));
    printf("%d -> %d\n", 420476, ft_find_next_prime(420476));
    printf("%d -> %d\n", 337541, ft_find_next_prime(337541));
    printf("%d -> %d\n", 269965, ft_find_next_prime(269965));
    printf("%d -> %d\n", 262287, ft_find_next_prime(262287));
    printf("%d -> %d\n", 298128, ft_find_next_prime(298128));
    printf("%d -> %d\n", 81045, ft_find_next_prime(81045));
    printf("%d -> %d\n", 6816, ft_find_next_prime(6816));
    printf("%d -> %d\n", 200353, ft_find_next_prime(200353));
    printf("%d -> %d\n", 87717, ft_find_next_prime(87717));
    printf("%d -> %d\n", 275623, ft_find_next_prime(275623));
    printf("%d -> %d\n", 20140, ft_find_next_prime(20140));
    printf("%d -> %d\n", 145069, ft_find_next_prime(145069));
    printf("%d -> %d\n", 309422, ft_find_next_prime(309422));
    printf("%d -> %d\n", 288966, ft_find_next_prime(288966));
    printf("%d -> %d\n", 196808, ft_find_next_prime(196808));
    printf("%d -> %d\n", 408696, ft_find_next_prime(408696));
    printf("%d -> %d\n", 308434, ft_find_next_prime(308434));
    printf("%d -> %d\n", 234200, ft_find_next_prime(234200));
    printf("%d -> %d\n", 12514, ft_find_next_prime(12514));
    printf("%d -> %d\n", 363758, ft_find_next_prime(363758));
    printf("%d -> %d\n", 257776, ft_find_next_prime(257776));
    printf("%d -> %d\n", 312563, ft_find_next_prime(312563));
    printf("%d -> %d\n", 757, ft_find_next_prime(757));
    printf("%d -> %d\n", 398583, ft_find_next_prime(398583));
    printf("%d -> %d\n", 36608, ft_find_next_prime(36608));
    printf("%d -> %d\n", 35590, ft_find_next_prime(35590));
    printf("%d -> %d\n", 174862, ft_find_next_prime(174862));
    printf("%d -> %d\n", 409874, ft_find_next_prime(409874));
    printf("%d -> %d\n", 68893, ft_find_next_prime(68893));
    printf("%d -> %d\n", 87838, ft_find_next_prime(87838));
    printf("%d -> %d\n", 284334, ft_find_next_prime(284334));
    printf("%d -> %d\n", 48416, ft_find_next_prime(48416));
    printf("%d -> %d\n", 32034, ft_find_next_prime(32034));
    printf("%d -> %d\n", 125232, ft_find_next_prime(125232));
    printf("%d -> %d\n", 418100, ft_find_next_prime(418100));
    printf("%d -> %d\n", 312630, ft_find_next_prime(312630));
    printf("%d -> %d\n", 288568, ft_find_next_prime(288568));
    printf("%d -> %d\n", 398662, ft_find_next_prime(398662));
    printf("%d -> %d\n", 46407, ft_find_next_prime(46407));
    printf("%d -> %d\n", 121678, ft_find_next_prime(121678));
    printf("%d -> %d\n", 406867, ft_find_next_prime(406867));
    printf("%d -> %d\n", 61269, ft_find_next_prime(61269));
    printf("%d -> %d\n", 315739, ft_find_next_prime(315739));
    printf("%d -> %d\n", 271203, ft_find_next_prime(271203));
    printf("%d -> %d\n", 192870, ft_find_next_prime(192870));
    printf("%d -> %d\n", 114535, ft_find_next_prime(114535));
    printf("%d -> %d\n", 173417, ft_find_next_prime(173417));
    printf("%d -> %d\n", 248682, ft_find_next_prime(248682));
    printf("%d -> %d\n", 306029, ft_find_next_prime(306029));
    printf("%d -> %d\n", 108921, ft_find_next_prime(108921));
    printf("%d -> %d\n", 210815, ft_find_next_prime(210815));
    printf("%d -> %d\n", 252289, ft_find_next_prime(252289));
    printf("%d -> %d\n", 72584, ft_find_next_prime(72584));
    printf("%d -> %d\n", 297710, ft_find_next_prime(297710));
    printf("%d -> %d\n", 27544, ft_find_next_prime(27544));
    printf("%d -> %d\n", 373150, ft_find_next_prime(373150));
    printf("%d -> %d\n", 219888, ft_find_next_prime(219888));
    printf("%d -> %d\n", 156579, ft_find_next_prime(156579));
    printf("%d -> %d\n", 271274, ft_find_next_prime(271274));
    printf("%d -> %d\n", 295751, ft_find_next_prime(295751));
    printf("%d -> %d\n", 207022, ft_find_next_prime(207022));
    printf("%d -> %d\n", 143794, ft_find_next_prime(143794));
    printf("%d -> %d\n", 390643, ft_find_next_prime(390643));
    printf("%d -> %d\n", 186808, ft_find_next_prime(186808));
    printf("%d -> %d\n", 230330, ft_find_next_prime(230330));
    printf("%d -> %d\n", 175035, ft_find_next_prime(175035));
    printf("%d -> %d\n", 101832, ft_find_next_prime(101832));
    printf("%d -> %d\n", 205261, ft_find_next_prime(205261));
    printf("%d -> %d\n",389070, ft_find_next_prime(389070));
    printf("%d -> %d\n", 397788, ft_find_next_prime(397788));
    printf("%d -> %d\n", 6117, ft_find_next_prime(6117));
    printf("%d -> %d\n", 169448, ft_find_next_prime(169448));
    printf("%d -> %d\n", 393706, ft_find_next_prime(393706));
    printf("%d -> %d\n", 286195, ft_find_next_prime(286195));
    printf("%d -> %d\n", 334329, ft_find_next_prime(334329));
    printf("%d -> %d\n", 184829, ft_find_next_prime(184829));
}
*/