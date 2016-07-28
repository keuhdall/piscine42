/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   discover.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhammerc <mhammerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 02:32:39 by mhammerc          #+#    #+#             */
/*   Updated: 2016/07/26 17:51:11 by mhammerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "discover.h"

int			empt(char **map, t_meta meta, t_square square)
{
	int		i;
	int		j;

	i = square.y;
	while (i < square.y + square.len)
	{
		j = square.x;
		while (j < square.x + square.len)
			if (map[i][j++] == meta.wall)
				return (0);
		++i;
	}
	return (1);
}

void		init(t_fn *fn,
		char **map, t_square *bs)
{
	get_meta_data(&(fn->meta), map);
	fn->pos.y = 0;
	fn->pos.x = -1;
	bs->x = 0;
	bs->y = 0;
	bs->len = 0;
}

int			a(t_square *test, t_fn *fn)
{
	test->x = fn->pos.x;
	test->y = fn->pos.y;
	test->len = fn->x;
	return (1);
}

t_square	discover(char **map)
{
	t_square	biggest_square;
	t_square	test_square;
	t_fn		fn;

	init(&fn, map, &biggest_square);
	while (++fn.pos.y < fn.meta.y + 1 && (fn.pos.x = -1) == -1)
		while (++fn.pos.x < fn.meta.x && (fn.c = map[fn.pos.y][fn.pos.x]))
			if (fn.c == fn.meta.empty && (fn.go_to_x = 0) == 0
					&& (fn.work = 1) == 1
					&& (fn.x = biggest_square.len + 1) == fn.x)
			{
				while (fn.go_to_x < fn.x
					&& map[fn.pos.y][fn.pos.x + fn.go_to_x] == fn.meta.empty)
					++fn.go_to_x;
				fn.work = (fn.go_to_x < fn.x) ? 0 : fn.work;
				while (fn.work && fn.pos.x + fn.x <= fn.meta.x
						&& fn.pos.y + fn.x <= fn.meta.y + 1
						&& map[fn.pos.y][fn.pos.x + fn.x - 1] == fn.meta.empty)
				{
					if (a(&test_square, &fn) && empt(map, fn.meta, test_square))
						biggest_square = test_square;
					++fn.x;
				}
			}
	return (biggest_square);
}
