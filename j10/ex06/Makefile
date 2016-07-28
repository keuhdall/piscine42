# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarques <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 10:51:03 by lmarques          #+#    #+#              #
#    Updated: 2016/07/19 21:43:05 by lmarques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op

FILES = ft_operations.c \
		ft_tools.c \
		doop.c

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all
