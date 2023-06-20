/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Src_01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 17:16:37 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/20 12:49:12 by dagabrie         ###   ########.fr       */
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

int issorted(node_t* head)
{
    node_t *tamp = head;
    if(tamp == NULL)
        return 0;
    while(tamp != NULL)
    {
        if (tamp->next != NULL && tamp->value > tamp->next->value)
            return 0;
        tamp = tamp->next;
    }
    return 1;
}

//>>: 1 esta na metade de cima
int is_up_or_down(node_t* head,int valor)
{
    node_t *tamp;
    int i = 0;

    tamp = head;
    while (tamp->next != NULL)
    {
        if(tamp->id == valor)
            break;
        tamp = tamp->next;
        i++;
    }
    
    if(i > (max_id(head)/2))
        return 0;
    else    
        return 1;
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

