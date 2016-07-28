/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhammerc <mhammerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 03:15:53 by mhammerc          #+#    #+#             */
/*   Updated: 2016/07/26 17:43:56 by mhammerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fill.h"

void	fill(char **map, t_square square, t_meta meta)
{
	int		i;
	int		j;

	i = square.y;
	while (i < square.y + square.len)
	{
		j = square.x;
		while (j < square.x + square.len)
			map[i][j++] = meta.square;
		++i;
	}
}
