/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 13:21:41 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/18 13:33:01 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	count;
	int	*tab2;

	count = 0;
	tab2 = malloc(sizeof(int) * length);
	while (count < length)
	{
		tab2[count] = (*f)(tab[count]);
		count++;
	}
	return (tab2);
}
