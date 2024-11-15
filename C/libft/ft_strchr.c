/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:06:11 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:06:12 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strchr:
 *      locates the first occurrence of the character c in the string s
 *
 * receive:
 *      a pointer to the string, s, and an integer, c, representing the
 *      character to locate
 * return:
 *      a pointer to the first occurrence of the character c in the string s.
 *      If c is not found, or if s is NULL, the function returns NULL.
 *      If c is the null terminator, it returns a pointer to the null terminator
 */
char *ft_strchr(const char *s, int c) {
	while (*s) {
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return (NULL);
}
