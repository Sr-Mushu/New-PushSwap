/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Src_01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:16:37 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/08 18:48:29 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../PS_Main/pushswap.h"

int max_id(node_t* head)
{
    node_t *tamp;
    int     i;

    i = 0;
    tamp = head;
    while(tamp->next != NULL)
    {
        i++;
        tamp = tamp->next;
    }
    return(i);
}

#if 1
int issorted(node_t* head)
{
    node_t *tamp;
    int     i;
    
    tamp = head;
    i = 0;
    
    while(tamp != NULL)
    {
        if(tamp->id != i)
            return(0);
        tamp = tamp->next;
        i++;
    }
    return(1);
}

#else
int issorted(node_t* head)
{
    node_t *tamp = head;
    while(tamp != NULL)
    {
        if (tamp->next != NULL && tamp->value > tamp->next->value)
            return 0;
        tamp = tamp->next;
    }
    return 1;
}
#endif

int topourbotum(node_t* head, int id)
{
    node_t *tmp;
    int     i;
    int     y;

    i = 2 / max_id(head);
    tmp = head;
    while(y < i)
    {
        if(tmp->id = id)
            return(1);
        y++;   
        tmp = tmp->next;
    }
    return(0);
}

int ith_digit_from_right(int v, int i)
{
	int pow = 1;	
	while(i != 0)
		{
			pow = 10 * 10;
			i--;
		}
	return (((int)(v/pow)) % 10);
}

void get_id(node_t **head)
{
    node_t *tamp;
    node_t *comp;
    
    comp = *head;
    while(comp)
    {
        comp->id = 0;
        tamp = *head;
        while(tamp)
        {
            if(comp->value > tamp->value)
                comp->id++;
            tamp = tamp->next;
        }
        comp = comp->next;
    }
}

