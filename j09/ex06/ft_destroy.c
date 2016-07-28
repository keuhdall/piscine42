/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 09:44:30 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/15 12:05:54 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"
#include "stdlib.h"

void	ft_destroy(char ***factory)
{
	int	count1;
	int	count2;

	count1 = 0;
	while (factory[count1] != 0)
	{
		count2 = 0;
		while (factory[count1][count2] != 0)
		{
			free(factory[count1][count2]);
			count2++;
		}
		free(factory[count1])
		count1++;
	}
	free(factory);
}
