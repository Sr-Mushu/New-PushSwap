/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Moves.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:16:20 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/22 22:18:53 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

// shap roda os dois do topo
//1 SA. 2 SB. 3 SS.
void	swap(int num, t_node **head_A, t_node **head_B)
{
	t_node	*tmp;

	if (num == 1)
		ft_printf("sa\n");
	if (num == 2)
		ft_printf("sb\n");
	if (num == 3)
		ft_printf("ss\n");
	if (num == 1 || num == 3)
	{
		tmp = (*head_A)->next;
		(*head_A)->next = tmp->next;
		tmp->next = *head_A;
		*head_A = tmp;
	}
	if (num == 2 || num == 3)
	{
		tmp = (*head_B)->next;
		(*head_B)->next = tmp->next;
		tmp->next = *head_B;
		*head_B = tmp;
	}
}

// tira o do top de uma para o outro
// vai mover todos um para cima
//1 PA. 2 PB.
void	push(int num, t_node **head_A, t_node **head_B)
{
	t_node	*tmp;

	if (num == 1)
	{
		ft_printf ("pb\n");
		tmp = *head_A;
		*head_A = tmp->next;
		tmp->next = *head_B;
		*head_B = tmp;
	}
	if (num == 2)
	{
		ft_printf ("pa\n");
		tmp = *head_B;
		*head_B = tmp->next;
		tmp->next = *head_A;
		*head_A = tmp;
	}
}

void	src_rotate(t_node *tamp, t_node *last, t_node **head_B)
{
	last = lastonlist(*head_B);
		last->next = *head_B;
		last = *head_B;
		tamp = (*head_B)->next;
		last->next = NULL;
		*head_B = tamp;
}

// vai mover todos um para cima 
//1 RA. 2 RB. 3 RR. 
void	rotate(int num, t_node **head_A, t_node **head_B)
{
	t_node	*tamp;
	t_node	*last;

	if (num == 1)
		ft_printf ("ra\n");
	if (num == 2)
		ft_printf ("rb\n");
	if (num == 3)
		ft_printf ("rr\n");
	if (num == 1 || num == 3 && (*head_A)->next != NULL)
	{
		last = lastonlist(*head_A);
		last->next = *head_A;
		last = *head_A;
		tamp = (*head_A)->next;
		last->next = NULL;
		*head_A = tamp;
	}
	if (num == 2 || num == 3)
		src_rotate (tamp, last, head_B);
}

// vai mover todos um para baixo
//1 RRA. 2 RRB. 3 RRR.
void	inver_rotate(int num, t_node **head_A, t_node **head_B)
{
	t_node	*last;
	t_node	*blst;

	if (num == 1)
		ft_printf("rra\n");
	if (num == 2)
		ft_printf("rrb\n");
	if (num == 3)
		ft_printf("rrr\n");
	if (num == 1 || num == 3)
	{
		blst = bforlastonlist(*head_A);
		last = blst->next;
		last->next = *head_A;
		*head_A = last;
		blst->next = NULL;
	}
	if (num == 2 || num == 3)
	{
		blst = bforlastonlist(*head_B);
		last = blst->next;
		last->next = *head_B;
		*head_B = last;
		blst->next = NULL;
	}
}
