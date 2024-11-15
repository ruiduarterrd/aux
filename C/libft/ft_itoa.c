/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:02:48 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:52:20 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_numlen(int num);

/* ft_itoa:
 *      converts an integer n into a null-terminated string representation
 *      (INT to ASCII)
 *
 * receive:
 *      an integer, n, that you want to convert to a string
 * return:
 *      a pointer to the newly allocated string representing the integer.
 *      returns NULL if memory allocation fails
 */
char *ft_itoa(int n) {
	int len;
	int long num;
	char *str;

	num = n;
	len = ft_numlen(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	str[len--] = '\0';
	if (num == 0)
		*str = '0';
	else if (num < 0) {
		num = num * -1;
		*str = '-';
	}
	while (num > 0) {
		str[len--] = ('0' + (num % 10));
		num = num / 10;
	}
	return (str);
}

/* ft_numlen:
 *      calculates the length of the string needed to represent an integer,
 *      including space for the negative sign if the number is negative
 *
 * receive:
 *      an integer, num, for which you want to calculate the length
 * return:
 *      the length of the number, i.e., how many characters are needed to
 *      represent the integer as a string
 */
static int ft_numlen(int num) {
	int len;

	if (num > 0)
		len = 0;
	else
		len = 1;
	while (num) {
		num = num / 10;
		len++;
	}
	return (len);
}
