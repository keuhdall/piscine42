/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 00:23:06 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/24 23:20:15 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

int		ft_get_height(char **str)
{
	int	count;

	count = 0;
	while (str[count] != 0)
		count++;
	return (count);
}

void	ft_get_colle(char **str)
{
	int	count_index;
	int	count_str;

	count_index = 0;
	count_str = 0;
	while (str[count_index] != 0)
	{
		while (str[count_index][count_str] != '\0')
		{
			ft_check_colle(str, count_str, count_index);
			count_str++;
		}
		count_str = 0;
		count_index++;
	}
}

int		ft_check_colle(char **str, int x_pos, int y_pos)
{
	int	result;

	result = 0;
	if (ft_check_colle00(str, x_pos, y_pos))
		result += 1;
	if (ft_check_colle01(str, x_pos, y_pos))
		result += 2;
	return (result);
}
