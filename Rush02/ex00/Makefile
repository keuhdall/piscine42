# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarques <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/24 23:31:52 by lmarques          #+#    #+#              #
#    Updated: 2016/07/24 23:32:17 by lmarques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = colle-2

SRC = main.c \
	  ft_split.c \
	  ft_tools.c \
	  parser.c \
	  ft_check_colle00.c \
	  ft_check_colle01.c

OBJ = main.o \
	  ft_split.o \
	  ft_tools.o \
	  parser.o \
	  ft_check_colle00.o \
	  ft_check_colle01.o

FLAG = -Wall -Wextra -Werror

all:
	gcc $(FLAG) -c $(SRC)
	gcc $(FLAG) $(OBJ) -o $(NAME)

clean :
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
