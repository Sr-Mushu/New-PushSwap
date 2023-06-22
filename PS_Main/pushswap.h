/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 14:55:06 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/22 18:40:03 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include	<unistd.h>
# include	"../ft_printf/ft_printf.h"
# include	"../libft-ps/libft.h"

//structs

struct s_node
{
	int				id;
	int				value;
	struct s_node	*next;
};
typedef struct s_node	t_node;
//PS-Val ---------------------------
//Main_Val.c
int			validacion(int numb_arg, char **arg);
//Src_Val.c
int			nullstr(char **arg, int num);
int			sinlcheck(char **arg, int num);
int			frt_isdigit(char **arg, int num);
int			duble(char **arg, int num);
int			max_min_int(char **arg, int num);
//PS-Alg ---------------------------
void		algorit(t_node *head_A, t_node *head_B);
void		bigsort(t_node **head_A, t_node **head_B);
void		sort3(t_node **head_A, t_node **head_B, int max_id);
void		smolsort(t_node	**head_A, t_node **head_B, int max_id);
//PS-Mov ---------------------------
//Moves.c
void		swap(int num, t_node **head_A, t_node **head_B);
void		push(int num, t_node **head_A, t_node **head_B);
void		rotate(int num, t_node **head_A, t_node **head_B);
void		inver_rotate(int num, t_node **head_A, t_node **head_B);
//PS-Src ---------------------------
//Src_01.c
int			max_id(t_node *head);
int			issorted(t_node *head);
void		get_id(t_node **head);
int			is_up_or_down(t_node *head, int id);
//Src_02.c
void		printlist(t_node *head);
void		printlistid(t_node *head);
t_node		*create_new_node(int value);
t_node		*lastonlist(t_node *head);
t_node		*bforlastonlist(t_node *head);
//Src_03.c
void		freelist(t_node *head);
void		ft_lstadd_front(t_node **lst, t_node *new);
void		ft_lstdelone(t_node *lst, void (*del)(void *));
void		checkpos(t_node **head_A, t_node **head_B, int max, int n);
//       ---------------------------

#endif