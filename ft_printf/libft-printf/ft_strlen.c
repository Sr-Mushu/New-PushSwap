/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 14:44:42 by dagabrie          #+#    #+#             */
/*   Updated: 2023/02/06 16:51:20 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_printf.h"

size_t	ft_strlen(const char *string)
{
	size_t	count;

	count = 0;
	while (string[count])
		count++;
	return (count);
}
