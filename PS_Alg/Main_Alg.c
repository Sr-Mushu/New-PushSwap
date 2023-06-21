/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main_Alg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:55:03 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/21 20:15:02 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"
// algoritum 
//--- START ---

void	algorit (node_t *head_A, node_t *head_B)
{
  
    int size;
     size = max_id(head_A) + 1;
    if (size == 2)
	  	swap(1, &head_A, &head_B);
	  else if(size == 3)
      sort3(&head_A,&head_B,max_id(head_A));
    else if(size == 5)
      smolsort(&head_A,&head_B,max_id(head_A));
    else
      bigsort(&head_A,&head_B);
}