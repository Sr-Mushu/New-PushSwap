/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main_Alg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:55:03 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/08 18:48:59 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"
// algoritum 
//--- START ---

void	algorit (node_t *head_A, node_t *head_B)
{
    int cize;

    cize = max_id(head_A);
	if(cize < 10)
        smolsort(&head_A,&head_B);
    if(cize < 100 )
        midiosort(&head_A,&head_B);
    else
        bigsort(&head_A,&head_B);
}