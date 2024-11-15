/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:05:01 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 12:06:06 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstadd_front:
 *      adds a new node at the beginning of a linked list
 *
 * receive:
 *      a pointer to a pointer to the first node of the list, lst, and
 *      a pointer to the new node, new_node, to be added to the front of the
 *      list
 * return:
 *      none, modifies the linked list in place
 */
void ft_lstadd_front(t_list **lst, t_list *new_node) {
	if (new_node == NULL)
		return;
	if (*lst == NULL) {
		*lst = new_node;
		new_node->next = NULL;
		return;
	}
	new_node->next = *lst;
	*lst = new_node;
}
