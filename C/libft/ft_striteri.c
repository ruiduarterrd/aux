/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:10:00 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:10:01 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_striteri:
 *      applies the function f to each character of the string s,
 *      passing the index of the character as the first argument
 *
 * receive:
 *      a pointer to the string, s, and a pointer to a function, f,
 *      that takes an unsigned integer and a pointer to a character
 * return:
 *      this function does not return a value. If s or f is NULL,
 *      it performs no action
 */
void ft_striteri(char *s, void (*f)(unsigned int, char *)) {
	unsigned int i;

	i = 0;
	if (s == NULL || f == NULL)
		return;
	while (s[i] != '\0') {
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
