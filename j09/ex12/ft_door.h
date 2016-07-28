/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 13:35:19 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/15 13:53:22 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include "unistd.h"

# define TRUE 1
# define OPEN 1
# define EXIT_SUCCESS 1

# define FALSE 0
# define CLOSE 0
# define EXIT_FAIL 0

typedef int		ft_bool;

typedef struct	s_door
{
	ft_bool		state;
}				t_door;

void			ft_putstr(char *str);
ft_bool			open_door(t_door *door);
ft_bool			close_door(t_door *door);
ft_bool			is_door_open(t_door *door);
ft_bool			is_door_close(t_door *door);

#endif
