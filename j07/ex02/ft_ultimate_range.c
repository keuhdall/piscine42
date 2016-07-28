/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 14:17:10 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/14 04:48:43 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	count;
	int	count_tab;

	count = min;
	count_tab = 0;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	while (count < max)
	{
		(*range)[count_tab] = count;
		count++;
		count_tab++;
	}
	return (max - min);
}
