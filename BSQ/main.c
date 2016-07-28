/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhammerc <mhammerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 03:12:46 by mhammerc          #+#    #+#             */
/*   Updated: 2016/07/27 14:28:24 by mhammerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"
#include "spliter.h"
#include "discover.h"
#include "fill.h"
#include "check.h"
#include "printer.h"
#include "unistd.h"

int		map_error(void)
{
	write(2, "map error\n", 10);
	return (1);
}

int		main(int argc, char **argv)
{
	char		**arr;
	char		*r;
	t_meta		meta;
	int			i;

	i = (argc == 1) ? -1 : 0;
	while (++i < argc)
	{
		r = ft_read(argc, argv[i]);
		arr = split(r);
		if (r == NULL || ft_strlen(r) <= 5 || !get_meta_data(&meta, arr))
		{
			(map_error());
			continue;
		}
		if (ft_check_map(arr, meta))
		{
			fill(arr, discover(arr), meta);
			printer(arr, meta);
		}
		else
			write(2, "map error\n", 10);
	}
	return (0);
}
