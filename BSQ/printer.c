/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhammerc <mhammerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 02:29:51 by mhammerc          #+#    #+#             */
/*   Updated: 2016/07/27 14:27:56 by mhammerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <unistd.h>

void	printer(char **arr, t_meta meta)
{
	int		i;

	i = 1;
	while (arr[i])
	{
		write(1, arr[i], meta.x);
		write(1, "\n", 1);
		++i;
	}
}
