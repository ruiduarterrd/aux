/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:13:55 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:13:57 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strlen:
 *      calculates the length of the string str, not including the
 *      null terminator
 *
 * receive:
 *      a pointer to the string, str, whose length is to be determined
 * return:
 *      the length of the string as a size_t value
 */
size_t ft_strlen(const char *str) {
	size_t i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
