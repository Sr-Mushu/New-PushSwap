/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Src_Val.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:10:55 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/08 18:48:49 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

int nullstr(char **arg, int num)
{
	int j;
	
	//ft_printf("checkr 2 \n");
	j = 1;
	while (j < num)
		{
			if(arg[j][0] == '\0')
				{
					ft_printf("vazia\n");
					return(0);
				}
			j++;
		}
	return(1);
}
int sinlcheck(char **arg, int num)
{
	int j;
	
	//ft_printf("checkr 3 \n");
	j = 1;
	while (j < num)
	{
		if(1 == ft_startsign(arg[j][0]))
		{
			if(0 == ft_isdigit(arg[j][1]))
			{
				ft_printf("char aftar signal: %c %c \n",arg[j][0],arg[j][1]);
				return(0);
			}
		}
		else if(0 == ft_isdigit(arg[j][0]))
		{
			ft_printf("char not allow: %c\n",arg[j][0]);
			return(0);
		}
		j++;
	}
	return(1);
}
int frt_isdigit(char **arg, int num)
{
	int j;
	int i;

	//ft_printf("checkr 4 \n");
	j = 1;
	i = 1;
	while (j < num)
	{
		while (arg[j][i])
		{
			if(0 == ft_isdigit(arg[j][i]))
			{
				ft_printf("char not allow: %c\n",arg[j][i]);
				return(0);
			}
			i++;
		}
		i = 1;
		j++;
	}
	return(1);
}
int duble(char **arg, int num)
{
	int j;
	int i;

	//ft_printf("checkr 5 \n");
	j = 1;
	i = 1;
	while (i < num)
	{
		while (j < num)
		{
			if(i != j)
				if( ft_atoi(arg[i]) == ft_atoi(arg[j]))
				{
					ft_printf("string duble: %s\n",arg[i]);
					return (0);
				}
			j++;
		}
		j = 1;
		i++;
	}
	return (1);
}
int max_min_int(char **arg, int num)
{
	int j;
	
	//ft_printf("checkr 6\n");
	j = 1;
	while (j < num)
		{
			if( 2147483648 < ft_atoi(arg[j]) || -2147483649 > ft_atoi(arg[j]) )
				{
					ft_printf("numero invalido\n");
					return(0);
				}
			j++;
		}
	return(1);
}