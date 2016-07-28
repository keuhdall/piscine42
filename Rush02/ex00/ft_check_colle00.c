/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_colle00.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 18:30:33 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/24 23:05:28 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_check_outerlines_colle00(char **str, int x_pos, int y_pos)
{
	if (x_pos == 0 || x_pos == (ft_strlen(str[y_pos]) - 1))
	{
		if (str[y_pos][x_pos] == 'o')
			return (1);
		else
			return (0);
	}
	else
	{
		if (str[y_pos][x_pos] == '-')
			return (1);
		else
			return (0);
	}
}

int	ft_check_innerlines_colle00(char **str, int x_pos, int y_pos)
{
	if (x_pos == 0 || x_pos == ft_strlen(str[y_pos] - 1))
	{
		if (str[y_pos][x_pos] == '|')
			return (1);
		else
			return (0);
	}
	else
	{
		if (str[y_pos][x_pos] == ' ')
			return (1);
		else
			return (0);
	}
}

int	ft_check_colle00(char **str, int x_pos, int y_pos)
{
	if (y_pos == 0 || y_pos == (ft_get_height(str) - 1))
	{
		if (!ft_check_outerlines_colle00(str, x_pos, y_pos))
			return (0);
		else
			return (1);
	}
	else
	{
		if (!ft_check_innerlines_colle00(str, x_pos, y_pos))
			return (0);
		else
			return (1);
	}
}
