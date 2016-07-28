/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 09:47:31 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/20 17:36:49 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;

	tmp = 0;
	tmp = *begin_list;
	if (tmp == 0)
		*begin_list = ft_create_elem(data);
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = ft_create_elem(data);
	}
}
