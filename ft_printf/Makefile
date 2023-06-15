# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/02 15:51:23 by dagabrie          #+#    #+#              #
#    Updated: 2023/06/07 15:26:02 by dagabrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(VERBOSE).SILENT:

CC 	= 	gcc -Wall -Wextra -Werror
AR 	= 	ar rcs
rmO = 	rm *.o

bh 	= 	ft_printf.h
ft 	= 	ft_printf.c ft_print_c.c ft_print_i_d.c ft_print_p.c ft_print_s.c ft_print_u.c ft_print_x.c ft_print_Xx.c

libft_Dir = ./libft-printf
libft = libft_printf.a


NAME = libftprintf.a
ft_o = $(ft:%.c=%.o)
	
$(NAME): $(ft_o) 
	make -C $(libft_Dir)
	cp $(libft_Dir)/$(libft) $(NAME)
	$(AR) $(NAME) $(ft_o)
	echo "[libftprintf.a COMPILED]"

$(ft_o): $(ft)
	$(CC) -c $(ft)
	echo "[$(ft_o) COMPILED]"
	
all: 
	$(NAME)

clean:
	make clean -C $(libft_Dir)
	rm -f $(ft_o)
	echo "[$(ft_o) REMOVED]"
	
fclean: clean
	rm -f $(libft_Dir)/$(libft)
	rm -f $(NAME)
	echo "[libftprintf.a REMOVED]"

re: fclean $(NAME)