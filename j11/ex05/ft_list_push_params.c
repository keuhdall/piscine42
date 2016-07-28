/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 15:08:06 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/20 21:07:12 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back_(t_list **begin_list, void *data)
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

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list *list;

	list = 0;
	while (ac > 1)
	{
		ft_list_push_back_(&list, av[ac - 1]);
		ac--;
	}
	return (list);
}
