/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:20:19 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:20:20 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_substr:
 *      creates a substring from the string s, starting at index start
 *      and up to len characters
 *
 * receives:
 *      a constant pointer to the string s
 *      an unsigned integer start indicating the starting index
 *      a size_t len specifying the maximum length of the substring
 *
 * returns:
 *      a pointer to the new substring,
 *      or NULL if memory allocation fails or if s is NULL
 */
char *ft_substr(char const *s, unsigned int start, size_t len) {
	char *substr;
	size_t size;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	ft_strlcpy(substr, s + start, len + 1);
	return (substr);
}
