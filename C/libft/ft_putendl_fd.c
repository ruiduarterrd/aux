/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:59:29 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:59:35 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_putendl_fd:
 *      writes the string s to the specified file descriptor followed by a
 *      newline
 *
 * receive:
 *      a pointer to the string, s, and an integer, fd, representing the
 *      file descriptor to which the string will be written
 * return:
 *      none. If s is NULL or fd is less than 0, the function does nothing
 */
void ft_putendl_fd(char *s, int fd) {
	int i;

	if (!s || fd < 0)
		return;
	i = 0;
	while (s[i]) {
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
