/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:18:45 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:18:55 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strtrim:
 *      removes characters from the beginning and end of the string s1
 *      that are present in the set of characters
 *
 * receives:
 *      a constant pointer to the string s1 to be trimmed
 *      a constant pointer to the set of characters to remove
 *
 * returns:
 *      a pointer to a new string with the trimmed result,
 *      or NULL if memory allocation fails
 */
char *ft_strtrim(char const *s1, char const *set) {
	char *str;
	int i;
	int j;

	i = 0;
	j = ft_strlen(s1) - 1;
	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j] && ft_strchr(set, s1[j]))
		j--;
	str = ft_substr(s1, i, (j - i) + 1);
	return (str);
}
