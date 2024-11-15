/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:48:55 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 11:49:35 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_bzero:
 *      sets a block of memory to zero by writing n bytes of value 0 starting
 *      from the memory location pointed to by s
 *
 * receive:
 *      pointer to memory block, s, and the number of bytes to zero, n
 * return:
 *      none, modifies the content of the memory block directly
 */

#include <stdio.h>

void ft_bzero(void *s, size_t n) {
	while (n-- > 0)
		*(char *)s++ = 0;
}

int main() {
	int i = 0;
	char s[] = "teste";

	while (i < 5) {
		printf("s[%d] = '%c'\n", i, s[i]);
		i++;
	}
	ft_bzero(s, 3);
	i = 0;
	while (i < 5) {
		printf("s[%d] = '%c'\n", i, s[i]);
		i++;
	}
	return 0;
}
