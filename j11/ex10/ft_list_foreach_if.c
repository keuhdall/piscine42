/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 00:55:15 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/20 01:53:08 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
		void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	tmp = 0;
	tmp = begin_list;
	if (tmp)
	{
		while (tmp)
		{
			if ((*cmp)(tmp->data, data_ref) == 0)
				(*f)(tmp->data);
			tmp = tmp->next;
		}
	}
}
