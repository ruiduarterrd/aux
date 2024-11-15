/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:47:54 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 19:47:55 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void *ptr)
{
	int	count;

	count = 0;
	if (ptr == NULL)
		return (ft_print_string("(nil)"));
	count += ft_print_string("0x");
	count += ft_print_hex((unsigned long long)ptr, 0);
	return (count);
}
