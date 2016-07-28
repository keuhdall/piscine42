/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bouton.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 02:30:51 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/15 12:17:47 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_bouton(int i, int j, int k)
{
	if (i <= j && j <= k)
		return (j);
	if (k <= j && j <= i)
		return (j);
	if (j <= i && i <= k)
		return (i);
	if (k <= i && i <= j)
		return (i);
	if (i <= k && k <= j)
		return (k);
	if (j <= k && k <= i)
		return (k);
	return (i);
}
