/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:08:46 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 12:08:48 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstclear:
 *      deletes and frees all nodes in a linked list, using a provided
 *      delete function to free the content of each node
 *
 * receive:
 *      a pointer to a pointer to the first node of the list, lst, and
 *      a pointer to a function, del, used to free the content of each node
 * return:
 *      none, modifies the linked list in place and frees memory
 */
void ft_lstclear(t_list **lst, void (*del)(void *)) {
	t_list *tmp;

	if (!lst)
		return;
	tmp = *lst;
	while (tmp != NULL) {
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = tmp;
	}
}
