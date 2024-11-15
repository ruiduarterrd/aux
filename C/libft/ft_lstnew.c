/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:47:18 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 12:47:20 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstnew:
 *      creates a new node for a linked list, initializing it with the given
 *      content
 *
 * receive:
 *      a void pointer, content, which will be stored in the new node
 * return:
 *      a pointer to the newly created node, or NULL if memory allocation fails
 */
t_list *ft_lstnew(void *content) {
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
