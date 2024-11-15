/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:48:40 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:53:34 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstsize:
 *      counts the number of nodes in a linked list
 *
 * receive:
 *      a pointer to the first node of the list, lst
 * return:
 *      the number of nodes in the list. Returns 0 if the list is empty
 */
int ft_lstsize(t_list *lst) {
	int count;

	count = 0;
	if (lst == NULL)
		return (count);
	while (lst) {
		lst = lst->next;
		count++;
	}
	return (count);
}
