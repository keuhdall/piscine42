# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarques <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 10:51:03 by lmarques          #+#    #+#              #
#    Updated: 2016/07/19 21:40:44 by lmarques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FILES = srcs/ft_putchar.c \
		srcs/ft_putstr.c \
		srcs/ft_strlen.c \
		srcs/ft_swap.c \
		srcs/ft_strcmp.c

OBJECTS = ft_putchar.o \
		  ft_putstr.o \
		  ft_strlen.o \
		  ft_swap.o \
		  ft_strcmp.o

HEADERS = includes/

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -c $(FILES) -I $(HEADERS)
	ar rc $(NAME) $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all
