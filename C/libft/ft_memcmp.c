/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:54:31 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:54:32 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_memcmp:
 *      compares two memory blocks byte by byte
 *
 * receive:
 *      pointers to the two memory blocks, s1 and s2, and a size_t, n,
 *      indicating the number of bytes to compare
 * return:
 *      an integer less than, equal to, or greater than zero, if the first
 *      n bytes of s1 are found to be less than, to match, or be greater
 *      than the first n bytes of s2, respectively. If n is zero, returns 0
 */
int ft_memcmp(const void *s1, const void *s2, size_t n) {
	if (n == 0)
		return (0);
	while (*(unsigned char *)s1 == *(unsigned char *)s2 && n > 1) {
		n--;
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
