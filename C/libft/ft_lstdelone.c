/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:40:14 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 12:40:15 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstdelone:
 *      deletes a single node from the linked list, using a provided
 *      delete function to free the content of the node and then frees the node
 *      itself
 *
 * receive:
 *      a pointer to the node to delete, lst, and a pointer to a function,
 *      del, used to free the content of the node
 * return:
 *      none, frees the memory associated with the node
 */
void ft_lstdelone(t_list *lst, void (*del)(void *)) {
	if (!lst || !del)
		return;
	del(lst->content);
	free(lst);
}
