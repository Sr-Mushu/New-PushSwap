/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Src_03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 14:26:03 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/22 18:41:20 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

void	freelist(t_node	*head)
{
	t_node	*current;
	t_node	*next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

void	ft_lstadd_front(t_node **lst, t_node *new)
{
	if (!lst || !new)
		return ;
	if (*lst != NULL)
		new->next = *lst;
	*lst = new;
}

void	ft_lstdelone(t_node *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(&lst->value);
	free(lst);
}

void	checkpos(t_node **head_A, t_node **head_B, int min, int n)
{
	if (is_up_or_down (*head_A, min))
	{
		while (1)
		{
			if ((*head_A)->id != min)
				rotate (1, head_A, head_B);
			else
				break ;
		}
	}	
	else
	{
		while (1)
		{
			if ((*head_A)->id != min)
				inver_rotate (1, head_A, head_B);
			else
				break ;
		}
	}
	push (1, head_A, head_B);
}
