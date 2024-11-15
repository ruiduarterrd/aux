/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:12:02 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:12:03 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strlcat:
 *      appends the string src to the end of dst up to size bytes,
 *      ensuring that the resulting string is null-terminated
 *
 * receive:
 *      a pointer to the destination string, dst, a pointer to the
 *      source string, src, and the size of the destination buffer
 * return:
 *      the total length of the string that was attempted to be created,
 *      which is the initial length of dst plus the length of src.
 *      If size is less than or equal to the length of dst, the function
 *      returns the length of src plus size
 */
size_t ft_strlcat(char *dst, const char *src, size_t size) {
	size_t d_len;
	size_t s_len;
	size_t i;

	s_len = ft_strlen(src);
	if (!size)
		return (s_len);
	d_len = ft_strlen(dst);
	i = d_len;
	if (size > 0 && size > d_len) {
		while (*src && (i < size - 1))
			dst[i++] = *src++;
		dst[i] = '\0';
		return (d_len + s_len);
	}
	return (s_len + size);
}
