/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 16:53:20 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/20 21:02:10 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*tmp;
	unsigned int	count;

	count = 1;
	tmp = 0;
	if (nbr == 0)
		return (tmp);
	tmp = begin_list;
	if (tmp)
	{
		while (count < nbr)
		{
			if (tmp == 0)
				return (0);
			tmp = tmp->next;
			count++;
		}
	}
	return (tmp);
}
