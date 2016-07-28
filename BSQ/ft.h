/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhammerc <mhammerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 03:09:10 by mhammerc          #+#    #+#             */
/*   Updated: 2016/07/26 04:48:27 by mhammerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

typedef struct		s_vector2
{
	int	x;
	int	y;
}					t_vector2;

typedef struct		s_meta
{
	int				x;
	int				y;
	char			empty;
	char			wall;
	char			square;
}					t_meta;

int					ft_atoi(char *str);
int					ft_strlen(char *str);
int					ft_arrlen(char **str);
int					get_meta_data(t_meta *meta, char **map);

#endif
