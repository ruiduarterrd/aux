/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:13:03 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:13:04 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strlcpy:
 *      copies up to size - 1 characters from the string src to dst,
 *      null-terminating the result
 *
 * receive:
 *      a pointer to the destination string, dst, a pointer to the
 *      source string, src, and the size of the destination buffer
 * return:
 *      the total length of the string that was attempted to be created,
 *      which is the length of src. If size is 0, the function does
 *      not copy anything and returns the length of src
 */
size_t ft_strlcpy(char *dst, const char *src, size_t size) {
	size_t i;
	size_t len;

	len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (len);
	while ((size - 1) > i && src[i] != '\0') {
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
