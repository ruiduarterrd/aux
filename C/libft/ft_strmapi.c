/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:15:11 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:15:12 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_strmapi:
 *      applies the function f to each character of the string s,
 *      passing its index as the first argument, to create a new
 *      string resulting from successive applications of f
 *
 * receive:
 *      a pointer to the string, s, and a function pointer, f,
 *      that takes an unsigned int and a char as arguments
 * return:
 *      a pointer to the newly created string, or NULL if memory
 *      allocation fails or if the input string is NULL
 */
char *ft_strmapi(char const *s, char (*f)(unsigned int, char)) {
	unsigned int i;
	char *str;

	if (s == NULL)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i] != '\0') {
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
