# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhammerc <mhammerc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/24 16:46:10 by mhammerc          #+#    #+#              #
#    Updated: 2016/07/26 14:02:49 by mhammerc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq

SRC = main.c \
	  check.c \
	  discover.c \
	  fill.c \
	  ft.c \
	  printer.c \
	  read.c \
	  spliter.c


OBJ = main.o \
	  check.o \
	  discover.o \
	  fill.o \
	  ft.o \
	  printer.o \
	  read.o \
	  spliter.o

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -c $(SRC)
	gcc -Wall -Werror -Wextra $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all
