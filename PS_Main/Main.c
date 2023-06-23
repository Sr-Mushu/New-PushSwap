/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 15:10:05 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/23 15:47:20 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	src_main(t_node **tmp, t_node **head_a, int numb_arg, char **arg);

int	main(int numb_arg, char **arg)
{
	t_node	*tmp;
	t_node	*head_a;
	t_node	*head_b;

	head_a = NULL;
	head_b = NULL;
	if (1 == validacion (numb_arg, arg))
	{
		src_main (&tmp, &head_a, numb_arg, arg);
		algorit (&head_a, &head_b);
		freelist (head_a);
		return (1);
	}
	else
		ft_printf("Erro...\nArgumentos Invalidos!\n");
	return (0);
}

//continio of main...
void	src_main(t_node **tmp, t_node **head_a, int numb_arg, char **arg)
{
	int		i;

	i = numb_arg - 1;
	while (numb_arg >= 2)
	{
		*tmp = create_new_node(atoi(arg[i]));
		if (!tmp)
		{
			freelist(*head_a);
			exit(EXIT_SUCCESS);
		}
		(*tmp)->next = *head_a;
		*head_a = *tmp;
		numb_arg--;
		i--;
	}
}
