/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhammerc <mhammerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 23:24:29 by mhammerc          #+#    #+#             */
/*   Updated: 2016/07/26 03:16:53 by mhammerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		check_horizontal(char **map, t_meta meta)
{
	t_vector2 position;

	position.x = 0;
	position.y = 1;
	while (position.y <= meta.y)
	{
		position.x = 0;
		while (map[position.y][position.x])
		{
			if (map[position.y][position.x] != meta.empty
					&& map[position.y][position.x] != meta.wall)
				return (0);
			++position.x;
		}
		if (position.x != meta.x)
			return (0);
		++position.y;
	}
	return (1);
}

int		ft_check_map(char **map, t_meta meta)
{
	if (ft_arrlen(map) != meta.y + 1)
		return (0);
	else if (!check_horizontal(map, meta))
		return (0);
	return (1);
}
