/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_apply_infix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/21 22:07:09 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/21 22:08:24 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_btree.h"

void	btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root->left)
		btree_apply_infix(root->left, applyf);
	(*applyf)(root->item);
	if (root->right)
		btree_apply_infix(root->right, applyf);
}
