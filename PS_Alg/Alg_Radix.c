/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Alg_Radix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:38:22 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/22 18:41:53 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

void	bigsort(t_node **head_A, t_node **head_B)
{
	int	p;
	int	i;
	int	max;

	max = max_id(*head_A) + 1;
	p = 0;
	while (! issorted(*head_A))
	{
		i = 0;
		while (i < max)
		{
			if ((*head_A)->id >> p & 1)
				rotate(1, head_A, head_B);
			else
				push(1, head_A, head_B);
			i++;
		}
		while (*head_B)
			push(2, head_A, head_B);
		p++;
	}
}
