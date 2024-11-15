/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:55:22 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:55:23 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_memcpy:
 *      copies n bytes from the source memory area to the destination
 *      memory area
 *
 * receive:
 *      a pointer to the destination memory area, dst, a pointer to the
 *      source memory area, src, and a size_t, n, indicating the number
 *      of bytes to copy
 * return:
 *      a pointer to the destination memory area, dst. If both dst and
 *      src are NULL, returns NULL
 */
void *ft_memcpy(void *dst, const void *src, size_t n) {
	char *p;

	if (dst == NULL && src == NULL)
		return (NULL);
	p = (char *)dst;
	while (n > 0) {
		*p = *(char *)src;
		p++;
		src++;
		n--;
	}
	return ((void *)dst);
}
