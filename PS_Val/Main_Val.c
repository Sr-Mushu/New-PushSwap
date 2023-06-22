/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main_Val.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:08:17 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/22 15:43:07 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

int	validacion(int numb_arg, char **arg)
{
	if (numb_arg < 2)
	{
		ft_printf ("insufficient argomentes \n");
		return (0);
	}
	if (0 == nullstr(arg, numb_arg))
		return (0);
	if (0 == sinlcheck(arg, numb_arg))
		return (0);
	if (0 == frt_isdigit(arg, numb_arg))
		return (0);
	if (0 == duble(arg, numb_arg))
		return (0);
	if (0 == max_min_int(arg, numb_arg))
		return (0);
	return (1);
}
