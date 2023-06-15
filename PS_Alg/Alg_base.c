/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Alg_base.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:39:42 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/09 11:31:32 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

void smolsort(node_t **head_A, node_t **head_B)
{
	int n = max_id(head_A) + 1;
	while(! issorted(head_A))
    {
		int i = 0;
		while (i < n)
		{
			if (i < n-1 && (*head_A)->next->value < (*head_A)->value)
				swap(1, &head_A, &head_B);
			rotate(1,&head_A,&head_B);
			i++;
		}
	}
}
