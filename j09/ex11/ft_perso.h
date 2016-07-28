/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 13:10:31 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/15 13:12:57 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# include <string.h>

struct	s_perso
{
	char	*name;
	int		life;
	int		age;
	int		profession;
};

typedef struct s_perso	t_perso;

enum
{
	SAVE_AUSTIN_POWERS = 0
};

#endif
