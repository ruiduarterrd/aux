/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:21:31 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:22:00 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_toupper:
 *      converts a lowercase letter to its uppercase equivalent.
 *      If the character is not a lowercase letter, it returns the character
 *      unchanged.
 *
 * receives:
 *      an integer c representing the ASCII value of the character to convert
 *
 * returns:
 *      the uppercase equivalent if c is a lowercase letter,
 *      or the original character if c is not a lowercase letter
 */
int ft_toupper(int c) {
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}
