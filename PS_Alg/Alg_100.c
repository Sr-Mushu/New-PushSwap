/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Alg_100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:39:46 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/09 11:32:54 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

void    midiosort(node_t **head_A, node_t **head_B)
{	
	get_id(&head_A);
	node_t *tamp =  head_A;
	int cout = 0;
	int	menor = 0;
	int max = max_id(head_A);
	int chnk = 29;
	int i = 0;
	
	
	while(head_A != NULL)
	{
		while(chnk < max)
		{
			while(i < 29)
			{
				if((*head_A)->id < chnk)
				{
					push(1,&head_A,&head_B);
					i++;
				}
				else
					rotate(1,&head_A,&head_B);
			}
			chnk = chnk + 29;
			i = 0;
		}
		
		push(1,&head_A,&head_B);
	}
	i = 0;
	
	while(head_B != NULL)
	{	
		if((*head_B)->id == max)
		{
			push(2,&head_A,&head_B);
			max--;
			while(i != 0)
			{
				if((*head_B)->id == max)
				{
					push(2,&head_A,&head_B);
					max--;
				}
				if((*head_B)->next != NULL)
					inver_rotate(2,&head_A,&head_B);
				i--;
			}
		}
		else
		{
			if((*head_B)->next != NULL)
				rotate(2,&head_A,&head_B);
			i++;
		}
	}
}
