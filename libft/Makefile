# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anouvel <anouvel@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/08/20 11:43:53 by anouvel           #+#    #+#              #
#*   Updated: 2014/11/18 15:11:11 by tauvray          ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

# ********************************* VARIABLES *********************************#

NAME	= libft.a

SRC		= ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strstr.c \
		  ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isprint.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strcmp.c \
		  ft_strncmp.c \
		  ft_atoi.c \
		  ft_strdup.c \
		  ft_strcpy.c \
		  ft_strncpy.c \
		  ft_strnstr.c \
		  ft_strcat.c \
		  ft_strncat.c \
		  ft_strlcat.c \
		  ft_memcpy.c \
		  ft_memccpy.c \
		  ft_memcmp.c \
		  ft_memchr.c \
		  ft_memmove.c \
		  ft_isascii.c \
		  ft_strclr.c \
		  ft_strequ.c \
		  ft_strnequ.c \
		  ft_putchar.c \
		  ft_putstr.c \
		  ft_putendl.c \
		  ft_putnbr.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_memalloc.c \
		  ft_memdel.c \
		  ft_strnew.c \
		  ft_strdel.c \
		  ft_striter.c \
		  ft_striteri.c \
		  ft_strmap.c \
		  ft_strmapi.c \
		  ft_strsub.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_strsplit.c \
		  ft_itoa.c \
		  ft_lstnew.c \
		  ft_lstdelone.c \
		  ft_lstdel.c \
		  ft_lstadd.c \
		  ft_lstiter.c \
		  ft_lstmap.c \
		  ft_errors.c \
		  get_next_line.c \
		  ft_realloc.c \
		  ft_putn.c \
		  ft_nbrint.c

BIN		= $(SRC:.c=.o)

INC		= includes/

CC		= gcc
OPTS	= -Wall -Wextra -Werror -g

# *********************************** RULES ********************************** #

all		: $(NAME)

$(NAME)	:
	$(CC) $(OPTS) -I $(INC) -c $(SRC)
	ar rc $(NAME) $(BIN)
	ranlib $(NAME)

clean	:
	rm -f $(BIN)

fclean	: clean
	rm -f $(NAME)

show	:
	@echo "********** REPOSITORY **********"
	@ls -l

re		: fclean all show
