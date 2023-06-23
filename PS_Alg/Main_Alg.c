/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main_Alg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:55:03 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/23 16:13:34 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"
// algoritum
//--- START ---
void	algorit(t_node **head_A, t_node **head_B)
{
	int	size;

	get_id (head_A);
	size = max_id (*head_A) + 1;
	if (issorted(*head_A))
		return ;
	if (size == 2)
		swap (1, head_A, head_B);
	else if (size == 3)
		sort3 (head_A, head_B, max_id (*head_A));
	else if (size == 5)
		smolsort (head_A, head_B, max_id (*head_A));
	else
		bigsort (head_A, head_B);
}
