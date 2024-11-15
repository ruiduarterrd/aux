/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:53:04 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:51:12 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_isalnum:
 *      checks if the input character is alphanumeric (either a digit or a
 *      letter of the alphabet)
 *
 * receive:
 *      an integer, x, representing the character to check
 * return:
 *      1 if the character is alphanumeric (digit or alphabet letter),
 *      0 otherwise
 */
int ft_isalnum(int x) {
	if (ft_isdigit(x) == 1 || ft_isalpha(x) == 1)
		return (1);
	return (0);
}
