/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhammerc <mhammerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 03:12:31 by mhammerc          #+#    #+#             */
/*   Updated: 2016/07/27 14:19:41 by mhammerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_atoi(char *str)
{
	int	count;
	int	sign;
	int	result;

	count = 0;
	sign = 1;
	result = 0;
	if (str[count] == '-')
		sign = -1;
	if (str[count] == '-' || str[count] == '+')
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		result *= 10;
		result += str[count] - '0';
		count++;
	}
	return (result * sign);
}

int		ft_strlen(char *str)
{
	int		i;

	if (!str)
		return (0);
	i = 0;
	while (str[i])
		++i;
	return (i);
}

int		ft_arrlen(char **arr)
{
	int		i;

	i = 0;
	while (arr[i])
		++i;
	return (i);
}

int		get_meta_data(t_meta *meta, char **map)
{
	int		len;
	char	c;

	len = ft_strlen(map[0]);
	meta->empty = map[0][len - 3];
	meta->wall = map[0][len - 2];
	meta->square = map[0][len - 1];
	c = map[0][len - 3];
	map[0][len - 3] = '\0';
	meta->y = ft_atoi(map[0]) >= 0 ? ft_atoi(map[0]) : 0;
	if (meta->y == 0)
		return (0);
	meta->x = ft_strlen(map[1]);
	map[0][len - 3] = c;
	return (1);
}
