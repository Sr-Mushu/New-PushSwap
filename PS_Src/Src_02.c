/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Src_02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:17:56 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/22 22:19:10 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

void	printlist(t_node *head)
{
	t_node	*temporary;

	temporary = head;
	while (temporary != NULL)
	{
		printf("[%d]->", temporary->value);
		temporary = temporary->next;
	}
	printf("[N]\n");
}

void	printlistid(t_node	*head)
{
	t_node	*temporary;

	temporary = head;
	while (temporary != NULL)
	{
		printf("[%d]->", temporary->id);
		temporary = temporary->next;
	}
	printf("[N]\n");
}

t_node	*lastonlist(t_node *head)
{
	t_node	*last;

	last = head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	return (last);
}

t_node	*bforlastonlist(t_node	*head)
{
	t_node	*last;

	last = head;
	while (last->next->next != NULL)
	{
		last = last->next;
	}
	return (last);
}

t_node	*create_new_node(int value)
{
	t_node	*result;
	
	result = malloc (sizeof(t_node));
	if (!result)
		return (NULL);
	result->value = value;
	result->next = NULL;
	return (result);
}
