# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmarques <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/07/18 10:51:03 by lmarques          #+#    #+#              #
#    Updated: 2016/07/21 13:21:24 by lmarques         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

FILES = ft_display_file.c \
		ft_tools.c \

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all
