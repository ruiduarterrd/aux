/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:45:36 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 11:48:14 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_atoi:
 *      converts a string to an integer.
 *
 * receives:
 *      a pointer to a string str that represents the integer to convert
 *
 * returns:
 *      the converted integer value
 *      if the string is empty or contains no valid digits, returns 0
 */
int ft_atoi(const char *str) {
	int sign;
	int num;
	char *s;

	sign = 1;
	num = 0;
	s = (char *)str;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	if (*s == '-' || *s == '+') {
		if (*s == '-')
			sign = sign * -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
		num = num * 10 + (*s++ - '0');
	return (num * sign);
}
