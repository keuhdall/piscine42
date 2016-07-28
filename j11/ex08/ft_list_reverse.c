/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 19:16:06 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/20 18:41:55 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*next;
	t_list	*prev;

	tmp = *begin_list;
	next = 0;
	prev = 0;
	while (tmp)
	{
		next = tmp->next;
		tmp->next = prev;
		prev = tmp;
		tmp = next;
	}
	*begin_list = prev;
}
