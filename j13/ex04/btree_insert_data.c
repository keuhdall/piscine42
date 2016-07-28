/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:18:05 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/23 11:13:17 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	btree_insert_data(t_btree **root, void *item, int (*cmpf)(void *, void *))
{
	if (root)
	{
		if ((*cmpf)((*root)->item, item) < 0)
			btree_insert_data(&((*root)->left), item, cmpf);
		if ((*cmpf)((*root)->item, item) >= 0)
			btree_insert_data(&((*root)->right), item, cmpf);
	}
	else
		btree_create_node(item);
}
