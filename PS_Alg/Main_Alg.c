/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main_Alg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:55:03 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/20 20:50:04 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"
// algoritum 
//--- START ---

void	algorit (node_t *head_A, node_t *head_B)
{
  /*
    int size;

    size = max_id(head_A);
    if (size == 2)
	  	swap(1, &head_A, &head_B);
	  else if(size < 3)
      smolsort(&head_A,&head_B);
    else if(size < 5 )*/
      bigsort(&head_A,&head_B);   
}