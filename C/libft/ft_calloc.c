/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:51:28 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:51:02 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_calloc:
 *      allocates memory for an array of nmemb elements of size bytes each and
 *      initializes all bytes to zero
 *
 * receive:
 *      nmemb, the number of elements to allocate memory for
 *      size, the size in bytes of each element
 * return:
 *      a pointer to the allocated memory, or NULL if the allocation fails.
 *      the memory is set to zero using ft_bzero
 */
void *ft_calloc(size_t nmemb, size_t size) {
	void *p;

	p = malloc(nmemb * size);
	if (p == NULL)
		return NULL;
	ft_bzero(p, nmemb * size);
	return (p);
}
