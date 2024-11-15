/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:00:18 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 14:00:23 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_putnbr_fd:
 *      writes the integer n to the specified file descriptor
 *
 * receive:
 *      an integer, n, to write and an integer, fd, representing the
 *      file descriptor to which the integer will be written
 * return:
 *      none. If n is negative, it writes a '-' character, and if n is
 *      equal to -2147483648, it handles this special case by writing
 *      '2' followed by the rest of the number
 */
void ft_putnbr_fd(int n, int fd) {
	if (n < 0) {
		ft_putchar_fd('-', fd);
		if (n == -2147483648) {
			ft_putchar_fd('2', fd);
			ft_putnbr_fd(147483648, fd);
		} else
			ft_putnbr_fd(-n, fd);
	}
	if (n >= 0) {
		if (n >= 10) {
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		} else
			ft_putchar_fd(n + 48, fd);
	}
}
