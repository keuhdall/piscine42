/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 15:48:11 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/20 17:19:09 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *tmp2;

	tmp = 0;
	tmp = *begin_list;
	tmp2 = 0;
	if (tmp)
	{
		while (tmp && tmp->next)
		{
			tmp2 = tmp->next;
			free(tmp);
			tmp = tmp2;
		}
	}
	*begin_list = 0;
}
