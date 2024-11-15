/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:08:34 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:08:36 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strdup:
 *      duplicates the string s by allocating memory for a new string
 *      and copying the contents of s into it
 *
 * receive:
 *      a pointer to the string, s, which is to be duplicated
 * return:
 *      a pointer to the newly allocated string that is a duplicate of s.
 *      If memory allocation fails, the function returns NULL
 */
char *ft_strdup(const char *s) {
	char *str;
	char *p;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	p = str;
	while (*s)
		*p++ = *s++;
	*p = '\0';
	return (str);
}
