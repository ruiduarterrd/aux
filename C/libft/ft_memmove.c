/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:56:11 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:56:17 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_memmove:
 *      safely copies n bytes from the source memory area to the
 *      destination memory area, handling overlapping regions
 *
 * receive:
 *      a pointer to the destination memory area, dst, a pointer to the
 *      source memory area, src, and a size_t, n, indicating the number
 *      of bytes to copy
 * return:
 *      a pointer to the destination memory area, dst. If both dst and
 *      src are NULL, returns NULL
 */
void *ft_memmove(void *dst, const void *src, size_t n) {
	size_t len;

	len = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src < dst) {
		len = n;
		while (len > 0) {
			len--;
			((char *)dst)[len] = ((char *)src)[len];
		}
	} else {
		while (len < n) {
			((char *)dst)[len] = ((char *)src)[len];
			len++;
		}
	}
	return (dst);
}
