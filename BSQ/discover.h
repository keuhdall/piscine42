/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   discover.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhammerc <mhammerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 03:11:04 by mhammerc          #+#    #+#             */
/*   Updated: 2016/07/26 03:46:56 by mhammerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DISCOVER_H
# define DISCOVER_H

# include "ft.h"

typedef struct		s_square
{
	int			x;
	int			y;
	int			len;
}					t_square;

typedef struct		s_fn
{
	char		c;
	int			x;
	int			go_to_x;
	int			work;
	t_meta		meta;
	t_vector2	pos;
}					t_fn;

t_square			discover(char **map);

#endif
