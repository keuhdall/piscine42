/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_colle01.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 19:18:02 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/24 22:34:04 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	ft_check_first_line(char **str, int x_pos, int y_pos)
{
	if (x_pos == 0)
	{
		if (str[y_pos][x_pos] == '/')
			return (1);
		else
			return (0);
	}
	else if (x_pos == ft_strlen(str[y_pos]) - 1)
	{
		if (str[y_pos][x_pos] == '\\')
			return (1);
		else
			return (0);
	}
	else
	{
		if (str[y_pos][x_pos] == '*')
			return (1);
		else
			return (0);
	}
}

int	ft_check_last_line(char **str, int x_pos, int y_pos)
{
	if (x_pos == 0)
	{
		if (str[y_pos][x_pos] == '\\')
			return (1);
		else
			return (0);
	}
	else if (x_pos == ft_strlen(str[y_pos]) - 1)
	{
		if (str[y_pos][x_pos] == '/')
			return (1);
		else
			return (0);
	}
	else
	{
		if (str[y_pos][x_pos] == '*')
			return (1);
		else
			return (0);
	}
}

int	ft_check_innerlines(char **str, int x_pos, int y_pos)
{
	if (x_pos == 0 || x_pos == ft_strlen(str[y_pos] - 1))
	{
		if (str[y_pos][x_pos] == '*')
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

int	ft_check_colle01(char **str, int x_pos, int y_pos)
{
	if (y_pos == 0)
	{
		if (!ft_check_first_line(str, x_pos, y_pos))
			return (0);
		else
			return (1);
	}
	else if (y_pos == ft_strlen(str[y_pos]) - 1)
	{
		if (!ft_check_last_line(str, x_pos, y_pos))
			return (0);
		else
			return (1);
	}
	else
	{
		if (!ft_check_innerlines(str, x_pos, y_pos))
			return (0);
		else
			return (1);
	}
}
