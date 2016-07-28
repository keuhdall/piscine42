/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 23:52:29 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/20 00:32:16 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*tmp;

	tmp = 0;
	tmp = begin_list;
	if (tmp)
	{
		while (tmp)
		{
			(*f)(tmp->data);
			tmp = tmp->next;
		}
	}
}
