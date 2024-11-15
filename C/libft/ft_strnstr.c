/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:17:03 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:17:05 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strnstr:
 *      locates the first occurrence of the substring little in the string big,
 *      where not more than len characters are searched
 *
 * receive:
 *      a pointer to the big string, a pointer to the little substring,
 *      and a size_t len indicating the maximum number of characters to search
 * return:
 *      a pointer to the first occurrence of little in big,
 *      or NULL if little is not found
 */
char *ft_strnstr(const char *big, const char *little, size_t len) {
	size_t i;
	size_t j;

	if (!*little)
		return ((char *)big);
	i = 0;
	while ((i < len) && big[i]) {
		j = 0;
		while (big[i + j] == little[j] && ((i + j) < len)) {
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}
