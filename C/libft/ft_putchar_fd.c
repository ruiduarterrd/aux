/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 13:57:47 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:58:30 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_putchar_fd:
 *      writes the character c to the specified file descriptor
 *
 * receive:
 *      a character, c, to write and an integer, fd, representing the
 *      file descriptor to which the character will be written
 * return:
 *      none. If fd is less than 0, the function does nothing
 */
void ft_putchar_fd(char c, int fd) {
	if (fd < 0)
		return;
	write(fd, &c, 1);
}
