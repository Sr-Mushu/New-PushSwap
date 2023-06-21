# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 15:59:45 by dagabrie          #+#    #+#              #
#    Updated: 2023/06/21 11:14:48 by dagabrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for pushswap
.SILENT:

# Compiler options
CC = gcc
CFLAGS = #-Wall -Werror -Wextra

# Directories
LIBFT_PATH = ./libft-ps
LIBPF_PATH = ./ft_printf
OBJ_PATH = ./PS_OBJ

# Source files
MAIN_FILES = 	./PS_Main/Main.c 	\
				./PS_Alg/Main_Alg.c \
				./PS_Alg/Alg_Base.c \
				./PS_Alg/Alg_Radix.c	\
				./PS_Mov/Moves.c	\
				./PS_Src/Src_01.c	\
				./PS_Src/Src_02.c	\
				./PS_Src/Src_03.c	\
				./PS_Val/Main_Val.c \
				./PS_Val/Src_Val.c

# Libraries
LIBRARIES = ./PS_Main/pushswap.h
LIBFT_LIB = $(LIBFT_PATH)/libft.a
LIBPF_LIB = $(LIBPF_PATH)/libftprintf.a

# Object files
OBJ_FILES = $(MAIN_FILES:.c=.o)

# Target
all: pushswap mv

pushswap: $(OBJ_FILES) $(LIBFT_LIB) $(LIBPF_LIB)
	$(CC) $(CFLAGS) -o pushswap $^ $(LIBFT_LIB) $(LIBPF_LIB)

$(LIBFT_LIB):
	make -C $(LIBFT_PATH)

$(LIBPF_LIB):
	make -C $(LIBPF_PATH)

mv:
	mkdir PS_OBJ
	mv $(OBJ_FILES) $(OBJ_PATH)

clean:
	rm -rf $(OBJ_PATH)
	make clean -C $(LIBFT_PATH)
	make clean -C $(LIBPF_PATH)

fclean: clean
	rm -f pushswap
	make fclean -C $(LIBFT_PATH)
	make fclean -C $(LIBPF_PATH)

re: fclean all

.PHONY: clean



# para correr por enquanto.
#git status && git add * && git status && git commit -m "Date" && git push

