/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:48:09 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 19:48:10 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_uint(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
		count += ft_print_uint(n / 10);
	ft_print_char('0' + n % 10);
	count++;
	return (count);
}
