/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 12:44:27 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/21 17:32:19 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft_tools.h"

void	ft_display_file(char *name)
{
	int		file;
	int		ret;
	char	buffer[11];

	file = open(name, O_RDONLY);
	while ((ret = read(file, buffer, 10)))
	{
		buffer[ret] = '\0';
		ft_putstr(buffer, 1);
	}
	close(file);
}

int		ft_handle_erros(int argc)
{
	if (argc < 2)
	{
		ft_putstr("File name missing.\n", 2);
		return (1);
	}
	else if (argc == 2)
		return (0);
	else
	{
		ft_putstr("Too many arguments.\n", 2);
		return (1);
	}
}

int		main(int argc, char *argv[])
{
	if (ft_handle_erros(argc))
		return (0);
	ft_display_file(argv[1]);
	return (0);
}
