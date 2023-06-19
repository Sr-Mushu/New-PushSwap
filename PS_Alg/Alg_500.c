/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Alg_500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:38:22 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/19 20:39:06 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

#if 1
void bigsort(node_t **head_A, node_t **head_B)
{
	int p;
	int i;
	int Max = max_id(*head_A) + 1;
	// radix sort	
	p = 0;
	while(! issorted(*head_A))
    {
		i = 0;
		while (i < Max)
		{
			if ((*head_A)->id >> p & 1)
					rotate(1,head_A,head_B);
			else
				push(1, head_A, head_B);
			i++;
		}
		while (*head_B)
			push(2, head_A, head_B);
		p++;
	}
}

#else
void bigsort(node_t **head_A, node_t **head_B)
{
	int p = 0;
	int i;
	int Max = max_id(*head_A) + 1;
	// radix sort	

	while(! issorted(*head_A))
    {
		i = 0;
		while (i < Max)
		{
			if ((*head_A)->id >> p & 1)
			{
				if(1 != is_up_or_down((*head_A),p))
					rotate(1,head_A,head_B);
				else
					inver_rotate(1,head_A,head_B);
			}
			else
				push(1, head_A, head_B);
			i++;
		}
		while (*head_B)
			push(2, head_A, head_B);
		p++;
	}
}
#endif

