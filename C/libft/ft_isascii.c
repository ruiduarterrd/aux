/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:54:57 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:51:34 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isascii:
 *      checks if the input character is a valid ASCII character
 *      (within the standard ASCII range of 0 to 127)
 *
 * receive:
 *      an integer, x, representing the character to check
 * return:
 *      1 if the character is a valid ASCII character (0-127),
 *      0 otherwise
 */
int ft_isascii(int x) {
	if (0 <= x && x <= 127)
		return (1);
	return (0);
}
