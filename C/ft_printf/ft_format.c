/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:47:12 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 19:47:17 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, va_list args)
{
	if (*format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (*format == 's')
		return (ft_print_string(va_arg(args, char *)));
	else if (*format == 'p')
		return (ft_print_pointer(va_arg(args, void *)));
	else if (*format == 'd' || *format == 'i')
		return (ft_print_int(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_print_uint(va_arg(args, unsigned int)));
	else if (*format == 'x')
		return (ft_print_hex(va_arg(args, unsigned int), 0));
	else if (*format == 'X')
		return (ft_print_hex(va_arg(args, unsigned int), 1));
	else if (*format == '%')
		return (ft_print_char('%'));
	return (0);
}
