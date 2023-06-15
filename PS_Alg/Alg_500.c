/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Alg_500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:38:22 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/08 18:49:06 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"
void	bigsort(node_t *head_A, node_t *head_B)
{
	get_id(&head_A);
	int max = max_id(head_A);
	int i = 0;
	int y = 0;
	int digit = 0;
	// radix sort id.
	while(! issorted(head_A))
	{
		ft_printf("ok\n");
		//A->B
		while(i <= 9)
		{
			if(head_A == NULL)
	 		{
				ft_printf("null");
				break;
			}
			while(y < max)
			{
				++y;
				if(ith_digit_from_right(head_A->id, digit) == i)
					push(1, &head_A, &head_B);
				else
					rotate(1,&head_A,&head_B);
			}
			i++;
		}
		digit++;
	
		// B -> A
		for (int k = 0; k < digit; ++k)
			push(2, &head_A, &head_B);
		}	
}