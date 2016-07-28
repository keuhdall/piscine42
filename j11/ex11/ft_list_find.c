/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 01:39:14 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/20 01:51:33 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	tmp = 0;
	tmp = begin_list;
	if (tmp)
	{
		while (tmp)
		{
			if (tmp->data == data_ref)
				return (tmp);
			tmp = tmp->next;
		}
	}
	tmp = 0;
	return (tmp);
}
