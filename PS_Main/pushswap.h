/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:55:06 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/21 20:14:50 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include "../ft_printf/ft_printf.h"
# include "../libft-ps/libft.h"

//structs

struct node
{
	int id;
	int value;
	struct node* next;
};
typedef struct node node_t;

//PS-Val ---------------------------
//Main_Val.c
int 	validacion(int numb_arg,char **arg);
//Src_Val.c
int 	nullstr(char **arg, int num);
int 	sinlcheck(char **arg, int num);
int 	frt_isdigit(char **arg, int num);
int 	duble(char **arg, int num);
int		max_min_int(char **arg, int num);
//PS-Alg ---------------------------
void	algorit (node_t *head_A, node_t *head_B);
void	bigsort (node_t **head_A, node_t **head_B);
void	sort3(node_t **head_A, node_t **head_B,int max_id);
void	smolsort(node_t **head_A, node_t **head_B,int max_id);
//PS-Mov ---------------------------
//Moves.c
void 	swap (int num,node_t **head_A, node_t **head_B);
void 	push (int num,node_t **head_A, node_t **head_B);
void 	rotate(int num,node_t **head_A,node_t **head_B);
void 	inver_rotate(int num,node_t **head_A,node_t **head_B);
//PS-Src ---------------------------
//Src_01.c
int		max_id(node_t* head);
int		issorted(node_t* head);
void	get_id(node_t **head);
int		is_up_or_down(node_t* head, int id);
//Src_02.c
void	printlist(node_t *head);
void	printlistid(node_t *head);
node_t*	create_new_node(int value);
node_t*	lastonlist(node_t* head);
node_t*	bforlastonlist(node_t* head);
//Src_03.c
void 	freeList(node_t *head);
void	ft_lstadd_front(node_t **lst, node_t *new);
void	ft_lstdelone(node_t *lst, void (*del)(void *));
void	checkpos(node_t **head_A, node_t **head_B, int max, int n);
//       ---------------------------

	
#endif