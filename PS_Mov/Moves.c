/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:16:20 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/19 14:57:11 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

// shap roda os dois do topo 
void swap (int num,node_t **head_A, node_t **head_B)
{
node_t *tmp;
	
	if(num == 1)
		ft_printf("sa\n");
	if(num == 2)
		ft_printf("sb\n");
	if(num == 3)
		ft_printf("ss\n");
	//SS 3
	if(num == 1 || num == 3)//SA 
	{
		tmp = (*head_A)->next;
		(*head_A)->next = tmp->next;
		tmp->next = *head_A;
		*head_A = tmp;
	}
	if(num == 2 || num == 3)//SB
	{
		tmp = (*head_B)->next;
		(*head_B)->next = tmp->next;
		tmp->next = *head_B;
		*head_B = tmp;
	}
}

// tira o do top de uma para o outro
// vai mover todos um para cima
void push (int num,node_t **head_A, node_t **head_B)
{
	node_t *tmp;
	
	if(num == 1)//PA
	{
		ft_printf("pb\n");
		tmp = *head_A;
		*head_A = tmp->next;
		tmp->next = *head_B;
		*head_B = tmp;
	}
	if(num == 2)//PB
	{
		ft_printf("pa\n");
		tmp = *head_B;
		*head_B = tmp->next;
		tmp->next =	*head_A;
		*head_A = tmp;
	}
}

// vai mover todos um para cima
void rotate(int num,node_t **head_A,node_t **head_B)
{
	node_t  *tamp;
	node_t	*last;
	
	if(num == 1)
		ft_printf("ra\n");
	if(num == 2)
		ft_printf("rb\n");
	if(num == 3)
		ft_printf("rr\n");
		
	//RR
	if(num == 1 || num == 3 && (*head_A)->next != NULL)//RA next 
	{
		last = lastonlist(*head_A);
		last->next = *head_A;
		last = *head_A;
		tamp = (*head_A)->next;
		last->next = NULL;
		*head_A = tamp;
	}
	if(num == 2 || num == 3)//RB
	{
		last = lastonlist(*head_B);
		last->next = *head_B;
		last = *head_B;
		tamp = (*head_B)->next;
		last->next = NULL;
		*head_B = tamp;
	}
}

// vai mover todos um para baixo
void inver_rotate(int num,node_t **head_A,node_t **head_B)
{
	node_t	*last;
	node_t  *blst;
	
	if(num == 1)
		ft_printf("rra\n");
	if(num == 2)
		ft_printf("rrb\n");
	if(num == 3)
		ft_printf("rrr\n");
	if(num == 1 || num == 3)//RRA 
	{
		blst = bforlastonlist(*head_A);
		last = blst->next;
		last->next = *head_A;
		*head_A = last;
		blst->next = NULL;
	}
	if(num == 2 || num == 3)//RRB
	{
		blst = bforlastonlist(*head_B);
		last = blst->next;
		last->next = *head_B;
		*head_B = last;
		blst->next = NULL;
	}
}