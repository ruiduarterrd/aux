/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:17:51 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:17:52 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strrchr:
 *      locates the last occurrence of the character c in the string s
 *
 * receive:
 *      a pointer to the string s and an int c representing the character to
 *      locate
 * return:
 *      a pointer to the last occurrence of c in s, or NULL if c is
 *      not found
 */
char *ft_strrchr(const char *s, int c) {
	char *p;

	p = NULL;
	while (*s) {
		if (*s == (char)c)
			p = (char *)s;
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (p);
}
