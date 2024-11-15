/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:56:38 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:51:42 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isdigit:
 *      checks if the input character is a digit (0-9)
 *
 * receive:
 *      an integer, x, representing the character to check
 * return:
 *      1 if the character is a digit (0-9),
 *      0 otherwise
 */
int ft_isdigit(int x) {
	if ('0' <= x && x <= '9')
		return (1);
	return (0);
}
