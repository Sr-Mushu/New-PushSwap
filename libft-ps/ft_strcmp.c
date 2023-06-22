/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 14:53:53 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/22 16:57:55 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(char *str_01, char *str_02)
{
	int	i;

	i = 0;
	if (ft_strlen(str_01) != ft_strlen(str_02))
		return (0);
	while (str_01[i])
	{
		if (str_01[i] != str_02[i])
			return (0);
		i++;
	}
	return (1);
}
