/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:10:05 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/22 22:25:18 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int numb_arg, char **arg)
{
	t_node	*tmp;
	t_node	*head_a;
	t_node	*head_b;
	int		i;

	head_a = NULL;
	head_b = NULL;
	i = numb_arg - 1;
	if (1 == validacion (numb_arg, arg))
	{
		while (numb_arg >= 2)
		{
			tmp = create_new_node(atoi(arg[i]));
			if (!tmp)
			{
				freelist(head_a);
				exit(EXIT_SUCCESS);
			}
			tmp->next = head_a;
			head_a = tmp;
			numb_arg--;
			i--;
		}
		algorit (&head_a, &head_b);
		freelist (head_a);
		return (1);
	}
	else
		ft_printf("Erro...\nArgumentos Invalidos!\n");
	return (0);
}

//norminette /nfs/homes/dagabrie/Documents/Curce42/push_swap/new-code-ps/PS_Main


void Src_main(t_node **tmp,)
{
	while (numb_arg >= 2)
		{
			*tmp = create_new_node(atoi(arg[i]));
			if (!*tmp)
			{
				freelist(head_a);
				exit(EXIT_SUCCESS);
			}
			(*tmp)->next = head_a;
			head_a = *tmp;
			numb_arg--;
			i--;
		}
}