/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:50:44 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:50:46 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_memchr:
 *      locates the first occurrence of a character in a memory block
 *
 * receive:
 *      a pointer to the memory block, s, an integer, c, representing the
 *      character to locate, and a size_t, n, specifying the number of bytes
 *      to search
 * return:
 *      a pointer to the first occurrence of the character c in the memory
 *      block, or NULL if the character is not found within the first n bytes
 */
void *ft_memchr(const void *s, int c, size_t n) {
	size_t i;

	i = 0;
	while (i < n) {
		if (*((unsigned char *)s) == (unsigned char)c)
			return ((void *)s);
		s++;
		i++;
	}
	return (NULL);
}
