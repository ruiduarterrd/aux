/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:53:36 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:51:24 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isalpha:
 *      checks if the input character is an alphabetic letter (either lowercase
 *      or uppercase)
 *
 * receive:
 *      an integer, x, representing the character to check
 * return:
 *      1 if the character is an alphabetic letter (a-z or A-Z),
 *      0 otherwise
 */
int ft_isalpha(int x) {
	if (('a' <= x && x <= 'z') || ('A' <= x && x <= 'Z'))
		return (1);
	return (0);
}
