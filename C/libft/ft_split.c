/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:04:54 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:04:55 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_word_count(char const *s, char c);

/* ft_split:
 *      splits a string s into an array of strings, using the character c
 *      as a delimiter
 *
 * receive:
 *      a pointer to the string, s, and a character, c, representing the
 *      delimiter to be used for splitting
 * return:
 *      a NULL-terminated array of strings (char **). If s is NULL or
 *      memory allocation fails, the function returns NULL
 */
char **ft_split(char const *s, char c) {
	char **strs;
	int i;
	int len;

	if (s == NULL)
		return (NULL);
	strs = malloc(sizeof(char *) * (ft_word_count(s, c) + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	while (*s) {
		if (*s != c) {
			len = 0;
			while (*s && *s != c && s++)
				len++;
			strs[i++] = ft_substr(s - len, 0, len);
		} else
			s++;
	}
	strs[i] = NULL;
	return (strs);
}

/* ft_word_count:
 *      counts the number of words in a string, separated by a given delimiter
 *
 * receive:
 *      a pointer to the string, s, and a character, c, representing the
 *      delimiter used to separate words
 * return:
 *      an integer representing the number of words in the string s.
 *      Words are defined as sequences of characters separated by the delimiter
 * c
 */
static int ft_word_count(char const *s, char c) {
	int count;

	count = 0;
	while (*s) {
		if (*s != c) {
			count++;
			while (*s && *s != c)
				s++;
		} else
			s++;
	}
	return (count);
}
