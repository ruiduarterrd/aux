/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 19:47:49 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 19:47:50 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int n)
{
	long int	num;
	int			count;

	num = n;
	count = 0;
	if (num < 0)
	{
		ft_print_char('-');
		count++;
		num = -num;
	}
	if (num >= 10)
		count += ft_print_int(num / 10);
	ft_print_char('0' + num % 10);
	count++;
	return (count);
}
