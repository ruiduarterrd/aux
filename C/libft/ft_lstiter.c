/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:41:35 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 12:41:36 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstiter:
 *      iterates over each node in a linked list, applying a provided
 *      function to the content of each node
 *
 * receive:
 *      a pointer to the first node of the list, lst, and a pointer to a
 *      function, f, that takes a void pointer and operates on the content
 * return:
 *      none, does not modify the list structure
 */
void ft_lstiter(t_list *lst, void (*f)(void *)) {
	if (!f || !lst)
		return;
	while (lst) {
		f(lst->content);
		lst = lst->next;
	}
}
