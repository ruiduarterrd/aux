/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:59:33 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:51:52 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isprint:
 *      checks if the input character is printable, including space (' ')
 *      and characters in the ASCII range 32 to 126
 *
 * receive:
 *      an integer, x, representing the character to check
 * return:
 *      1 if the character is printable (ASCII 32-126),
 *      0 otherwise
 */
int ft_isprint(int x) {
	if (32 <= x && x <= 126)
		return (1);
	return (0);
}
