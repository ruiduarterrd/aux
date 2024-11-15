/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:56:55 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:57:00 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_memset:
 *      fills the first n bytes of the memory area pointed to by s with
 *      the constant byte c
 *
 * receive:
 *      a pointer to the memory area, s, an integer, c, representing
 *      the byte to fill the memory area with, and a size_t, n, indicating
 *      the number of bytes to set
 * return:
 *      a pointer to the memory area, s
 */
void *ft_memset(void *s, int c, size_t n) {
	char *p;

	p = (char *)s;
	while (n > 0) {
		*p = (char)c;
		p++;
		n--;
	}
	return ((void *)s);
}
