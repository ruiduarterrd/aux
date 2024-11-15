/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruiduarterrd <ruiduarte.rrd@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 12:43:05 by ruiduarterrd      #+#    #+#             */
/*   Updated: 2024/10/03 13:52:44 by ruiduarterrd     ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* ft_lstlast:
 *      returns the last node of a linked list
 *
 * receive:
 *      a pointer to the first node of the list, lst
 * return:
 *      a pointer to the last node of the list, or NULL if the list is empty
 */
t_list *ft_lstlast(t_list *lst) {
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return lst;
}
