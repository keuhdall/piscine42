/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 14:18:42 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/19 14:44:41 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *tmp;

	tmp = 0;
	tmp = begin_list;
	if (tmp)
	{
		while (tmp->next)
			tmp = tmp->next;
	}
	return (tmp);
}
