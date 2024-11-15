/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:45:42 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:53:08 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstmap:
 *      creates a new linked list by applying a function to each element of
 *      the original list and using a provided delete function to free the
 *      content of the nodes in case of failure
 *
 * receive:
 *      a pointer to the first node of the list, lst, a pointer to a function,
 *      f, that takes a void pointer and returns a new content for each node,
 *      and a pointer to a function, del, used to free the content of nodes
 *      if memory allocation fails
 * return:
 *      a pointer to the new list, or NULL if memory allocation fails
 */
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
	t_list *new, *temp;

	new = NULL;
	while (lst) {
		temp = ft_lstnew(f(lst->content));
		if (!temp) {
			ft_lstclear(&temp, del);
			break;
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}
