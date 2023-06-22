/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:38:07 by dagabrie          #+#    #+#             */
/*   Updated: 2023/06/22 16:56:26 by dagabrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>

/*==================|ft's|======================*/

long int	ft_atoi(const char *string);

int			ft_isdigit(int character);

int			ft_startsign(int character);

int			ft_strcmp(char *str_01, char *str_02);

size_t		ft_strlcpy(char *destiny, const char *sources, size_t size);

size_t		ft_strlen(const char *string);

// void	ft_lstadd_front(node_t **lst, node_t *new);

#endif /*LIBFT*/
