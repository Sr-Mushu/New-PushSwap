/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Src_03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:26:03 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/08 18:48:37 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

void freeList(node_t *head) 
{ 
   node_t *t; 
   while (head != NULL) { 
      t = head->next; 
      freeNode(head); 
      head = t; 
   } 
}

void	ft_lstadd_front(node_t **lst, node_t *new)
{
	if (!lst || !new)
		return ;
	if (*lst != NULL)
		new->next = *lst;
	*lst = new;
}

void	ft_lstdelone(node_t *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->value);
	free(lst);
}