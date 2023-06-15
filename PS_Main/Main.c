/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:10:05 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/08 18:55:08 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int numb_arg, char **arg)
{
	node_t	*head_A = NULL;
	node_t	*head_B = NULL;
	node_t	*tmp;
	int		i;

	i = numb_arg - 1;
	if( 1 == validacion(numb_arg, arg))
	{
		while (numb_arg >= 2)
		{
		tmp = create_new_node(atoi(arg[i]));
		tmp->next = head_A;
		head_A = tmp;
		numb_arg--;
		i--;
		}
		get_id(&head_A);
		algorit(head_A,head_B);
		freeList(head_A);
		return(1);
	}
	else
		ft_printf("Erro...\nArgumentos Invalidos!\n");
return(0);
}

//norminette /nfs/homes/dagabrie/Documents/Curce42/push_swap/new-code-ps/PS_Main