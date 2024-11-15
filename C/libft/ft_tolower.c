/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:20:53 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:21:49 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_tolower:
 *      converts an uppercase letter to its lowercase equivalent.
 *      If the character is not an uppercase letter, it returns the character
 *      unchanged.
 *
 * receives:
 *      an integer c representing the ASCII value of the character to convert
 *
 * returns:
 *      the lowercase equivalent if c is an uppercase letter,
 *      or the original character if c is not an uppercase letter
 */
int ft_tolower(int c) {
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}
