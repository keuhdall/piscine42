/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <lmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 10:25:16 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/19 15:19:46 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;

	tmp = 0;
	tmp = ft_create_elem(data);
	tmp->next = *begin_list;
	*begin_list = tmp;
}
