/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Alg_Base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:39:42 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/21 20:15:39 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

void	sort3(node_t **head_A, node_t **head_B, int max)
{
	printlist(*head_A);
	ft_printf("aqui\n");
	if (1 == issorted(*head_A))
		return ;
	ft_printf("Max : %d\n",max);
	if ((*head_A)->id == max)
		rotate(1, head_A, head_B);
	
	else if ((*head_A)->next->id == max)
		inver_rotate(1, head_A, head_B);
	
	if ((*head_A)->id > (*head_A)->next->id)
		swap(1, head_A, head_B);
}

void smolsort(node_t **head_A, node_t **head_B,int max)
{
	node_t	*tmp;
	
	if ((max_id(*head_A) + 1) == 5)
		checkpos(head_A, head_B, 0, 1);
	checkpos(head_A, head_B, 1, 2);
	
	ft_printf("od? :%d \n",issorted(*head_A));
	
	
	if (0 == issorted(*head_A))
		sort3(head_A,head_B, max);
	
	while (*head_B)
		push(2,head_A, head_B);
}






