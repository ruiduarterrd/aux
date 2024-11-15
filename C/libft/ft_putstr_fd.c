/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:02:01 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:02:02 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_putstr_fd:
 *      writes the string s to the specified file descriptor
 *
 * receive:
 *      a pointer to the string, s, and an integer, fd, representing the
 *      file descriptor to which the string will be written
 * return:
 *      none. If s is NULL or fd is less than 0, the function does nothing
 */
void ft_putstr_fd(char *s, int fd) {
	int i;

	i = 0;
	if (!s || fd < 0)
		return;
	while (s[i]) {
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
