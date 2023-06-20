/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Alg_100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:39:46 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/20 20:45:49 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

void    midiosort(node_t **head_A, node_t **head_B)
{	

}

void	sort3(node_t **head_A, node_t **head_B)
{
	int	max;
	int size;
	
	size = max_id(*head_A);
	if (issorted(*head_A))
		return ;
	max = max_id(*head_A);
	if ((*head_A)->id == max)
		rotate(1, head_A, head_B);
	else if ((*head_A)->next->id == max)
		inver_rotate(1, head_A, head_B);
	if ((*head_A)->id > (*head_A)->next->id)
		swap(1, head_A, head_B);
}
/*
void	sort4and5(node_t **head_A, node_t **head_B)
{
	node_t	*tmp;
	int		min;
	int size;
	
	size = max_id(head_A);
	if (size == 5)
	{
		tmp = *head_A;
		min = get_min_int(tmp);
		stack_check_pos(stack_a, stack_b, min, 1);
	}
	tmp = *head_A;
	min = get_min_int(tmp);
	stack_check_pos(stack_a, stack_b, min, 2);
	if (!is_sorted(stack_a))
		sort_3(stack_a);
	while (*head_A)
		push_a(stack_a, stack_b);
}
*/
