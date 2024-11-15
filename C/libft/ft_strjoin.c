/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:10:59 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:11:00 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strjoin:
 *      concatenates two strings s1 and s2 into a new string
 *
 * receive:
 *      two pointers to constant strings, s1 and s2, which are to be
 *      concatenated
 * return:
 *      a pointer to the newly allocated string that contains the
 *      concatenation of s1 and s2. If memory allocation fails, the
 *      function returns NULL. If either s1 or s2 is NULL, it is treated
 *      as an empty string
 */
char *ft_strjoin(char const *s1, char const *s2) {
	char *str;
	char *p;

	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	p = str;
	while (s1 && *s1)
		*p++ = *s1++;
	while (s2 && *s2)
		*p++ = *s2++;
	*p = '\0';
	return (str);
}
