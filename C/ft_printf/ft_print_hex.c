/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:47:39 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 19:47:42 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long long n, int base)
{
	int		count;
	char	*hex_lower;
	char	*hex_upper;
	char	*hex;

	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (base)
		hex = hex_upper;
	else
		hex = hex_lower;
	count = 0;
	if (n >= 16)
		count += ft_print_hex(n / 16, base);
	ft_print_char(hex[n % 16]);
	count++;
	return (count);
}
