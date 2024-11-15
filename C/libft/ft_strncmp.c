/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:16:11 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:16:12 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strncmp:
 *      compares the first n bytes of the strings s1 and s2
 *      in a lexicographical manner
 *
 * receive:
 *      two pointers to strings, s1 and s2, and a size_t n,
 *      indicating the number of bytes to compare
 * return:
 *      an integer less than, equal to, or greater than zero,
 *      if the first n bytes of s1 is found, respectively, to be
 *      less than, to match, or be greater than the first n bytes of s2
 */
int ft_strncmp(const char *s1, const char *s2, size_t n) {
	unsigned char *p1;
	unsigned char *p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n && *p1 && *p2 && *p1 == *p2) {
		p1++;
		p2++;
		n--;
	}
	if (n)
		return (*p1 - *p2);
	else
		return (0);
}
