/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 13:19:51 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/13 16:01:46 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	count_tab;
	int	*tab;

	count = min;
	count_tab = 0;
	tab = 0;
	if (min >= max)
		return (tab);
	tab = malloc(sizeof(int) * (max - min));
	while (count < max)
	{
		tab[count_tab] = count;
		count++;
		count_tab++;
	}
	return (tab);
}
