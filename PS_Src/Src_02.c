/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Src_02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:17:56 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/08 18:48:33 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

void printlist(node_t *head)
{
	node_t *temporary = head;
	while (temporary != NULL)
	{
		printf("[%d]->", temporary->value);
		temporary = temporary->next;
	}
	printf("[N]\n");
}

void printlistid(node_t *head)
{
	node_t *temporary = head;
	while (temporary != NULL)
	{
		printf("[%d]->", temporary->id);
		temporary = temporary->next;
	}
	printf("[N]\n");
}

node_t* lastonlist(node_t* head) {
    node_t* last = head;
    while (last->next != NULL) {
        last = last->next;
    }
    return last;
}

node_t* bforlastonlist(node_t* head) {
    node_t* last = head;
    while (last->next->next != NULL) {
        last = last->next;
    }
    return last;
}

node_t *create_new_node(int value)
{
    node_t *result = malloc(sizeof(node_t));
    result->value = value;
    result->next = NULL;
    return result;
}