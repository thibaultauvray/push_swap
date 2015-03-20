# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tauvray <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/17 11:01:12 by tauvray           #+#    #+#              #
#*   Updated: 2014/11/21 15:01:43 by tauvray          ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

# *********************************VARIABLES***********************************#

NAME = push_swap

SRC_DIR = srcs/

SRC = srcs/main.c \
	  srcs/ft_gestlst.c \
	  srcs/ft_sa.c \
	  srcs/print_pile.c \
	  srcs/ft_ra.c \
	  srcs/ft_rra.c \
	  srcs/ft_pb.c \
	  srcs/ft_pa.c \
	  srcs/ft_sb.c \
	  srcs/ft_rb.c \
	  srcs/ft_rrb.c \
	  srcs/ft_ss.c \
	  srcs/ft_rr.c \
	  srcs/ft_rrr.c \
	  srcs/istri.c \
	  srcs/ft_bf.c \
	  srcs/init.c \
	  srcs/ft_brute.c \
	  srcs/ft_opts.c \
	  srcs/ft_swap_opts.c \
	  srcs/ft_swap_v.c \
	  srcs/ft_errors.c

INC = includes/

LIBINC = libft/includes/

LIB = libft.a

BIN_DIR = bin/

BIN = main.o \
	  ft_gestlst.o \
	  ft_sa.o \
	  print_pile.o \
	  ft_ra.o \
	  ft_rra.o \
	  ft_pb.o \
	  ft_pa.o \
	  ft_sb.o \
	  ft_rb.o \
	  ft_rrb.o \
	  ft_ss.o \
	  ft_rr.o \
	  ft_rrr.o \
	  istri.o \
	  ft_bf.o \
	  init.o \
	  ft_brute.o \
	  ft_opts.o \
	  ft_swap_opts.o \
	  ft_swap_v.o \
	  ft_errors.o

CC = gcc

OPTS = -Wall -Werror -Wextra -g

# *********************************RULES***************************************#

all			:  $(NAME)

$(NAME)		: 
	make -C libft/
	$(CC) $(OPTS) -I $(LIBINC) -I includes/ -c $(SRC)
	$(CC) $(OPTS) $(BIN) -L libft/ -lft -o $(NAME)


clean 		:
	make clean -C libft/
	rm -f $(BIN)

fclean		: clean
	make fclean -C libft/
	rm -f $(NAME)

re			: fclean all 
