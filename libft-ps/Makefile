# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/21 11:52:57 by dagabrie          #+#    #+#              #
#    Updated: 2023/06/08 18:47:09 by dagabrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(VERBOSE).SILENT:

CC 	= 	gcc -Wall -Wextra -Werror
AR 	= 	ar rcs
rmO = 	rm *.o

bh 	= 	libft.h
ft 	= 	ft_atoi.c ft_isdigit.c ft_strlcpy.c ft_strlen.c ft_startsign.c ft_strcmp.c

NAME = $(bh:%.h=%.a) 
ft_o = $(ft:%.c=%.o)
	
$(NAME):  $(ft_o) 
	$(AR) $(NAME) $(ft_o)
	echo "[libft.a COMPILED]"
	
$(ft_o): $(ft)
	$(CC) -c $(ft)

all: 
	$(NAME)

clean:
	rm -f $(ft_o)
	echo "[$(ft_o) REMOVE]"

fclean: clean
	rm -f $(NAME)
	echo "[libft.a REMOVE]"

re: fclean $(NAME)