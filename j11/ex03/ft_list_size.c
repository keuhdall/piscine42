/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 12:41:36 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/19 15:22:22 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*tmp;

	count = 0;
	tmp = 0;
	tmp = begin_list;
	if (tmp)
	{
		while (tmp)
		{
			tmp = tmp->next;
			count++;
		}
	}
	return (count);
}
