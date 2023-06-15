/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:49:46 by dagabrie          #+#    #+#             */
/*   Updated: 2023/02/15 14:58:00 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void	ft_lstadd_front(node_t **lst, node_t *new)
{
	if (!lst || !new)
		return ;
	if (*lst != NULL)
		new->next = *lst;
	*lst = new;
}
