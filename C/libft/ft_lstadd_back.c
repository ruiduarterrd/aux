/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:04:22 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 12:05:36 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstadd_back:
 *      adds a new node at the end of a linked list
 *
 * receive:
 *      a pointer to a pointer to the first node of the list, lst, and
 *      a pointer to the new node, new_node, to be added to the list
 * return:
 *      none, modifies the linked list in place
 */
void ft_lstadd_back(t_list **lst, t_list *new_node) {
	t_list *tmp;

	if (new_node == NULL)
		return;
	if (*lst == NULL) {
		*lst = new_node;
		return;
	}
	tmp = *lst;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new_node;
}
