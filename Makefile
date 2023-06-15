# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dagabrie <dagabrie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/03 15:59:45 by dagabrie          #+#    #+#              #
#    Updated: 2023/06/09 11:50:27 by dagabrie         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(VERBOSE).SILENT:

# NAME

NAME = $(BH:%.h=%.a) 

# VAR

AR 		= ar rcs
CC		= gcc
CFLAGS	= #-Wall -Werror -Wextra
MKD		= mkdir
RM		= rm -f
MV		= mv

# FILES

BH 			=	pushswap.h
MAIN_FILES	=	./PS_Main/Main.c	\
				./PS_Alg/Main_Alg.c	\
				./PS_Alg/Alg_base.c	\
				./PS_Alg/Alg_100.c	\
				./PS_Alg/Alg_500.c	\
				./PS_Mov/Moves.c	\
				./PS_Src/Src_01.c	\
				./PS_Src/Src_02.c	\
				./PS_Src/Src_03.c	\
				./PS_Val/Main_Val.c	\
				./PS_Val/Src_Val.c	\

OBJ = $(patsubst MAIN_FILES%, obj%, $(MAIN_FILES:.c=.o))
DEPS	=	./libft-ps/libft.a ./ft_printf/libftprintf.a

# PATHS
OBJ_PATH	=	./obj
LIBFT_PATH	=	./libft-ps
LIBPF_PATH	=	./ft_printf

#OBJ

MAIN_o	=	$(MAIN_FILES:%.c=%.o)

# ALL

all: $(DEPS) $(NAME)

$(NAME): $(OBJ) obj
	$(AR) $(NAME) $(OBJS)
	echo "[PUSH_SWAP COMPILED]"

# COMPILE

$(OBJS):
	@${CC} ${CFLAGS} ${MAIN_FILES} -c
	@${MV} ${MAIN_o} ${OBJ_PATH}
	
# LIBRARIES


./libft-ps/libft.a: $(shell make -C $(LIBFT_PATH) -q libft.a || echo force)
	make -C $(LIBFT_PATH)

./ft_printf/libftprintf.a: $(shell make -C $(LIBPF_PATH) -q libftprintf.a || echo force)
	make -C $(LIBPF_PATH)

# DIR

obj:
	@mkdir -p obj

obj/%.o: /%.c
	@$(CC) $(CFLAGS) -o $@ -c $<
	@$(MV) %.o $(OBJ_PATH)

# Clean

clean:
	make clean -C $(LIBFT_PATH)
	make clean -C $(LIBPF_PATH)
	$(RM) -r $(OBJ_PATH)
	echo "$(NAME).o files are removed"

fclean: clean
	make fclean -C $(LIBFT_PATH)
	make fclean -C $(LIBPF_PATH)
	$(RM) $(NAME)
	echo "$(NAME) is deleted"

re:	fclean all

.PHONY: all clean fclean re force

# para correr por enquanto.
# gcc pushswap.c pushvalind.c pushuilit.c pushcomand.c pushalgorit.c pushlibri.h ./libft-ps/libft.a ./ft_printf/libftprintf.a

#git status && git add * && git status && git commit -m "Date" && git push

