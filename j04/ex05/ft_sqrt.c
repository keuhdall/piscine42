/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 17:54:43 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/09 20:46:15 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	count;

	count = 1;
	while (count * count <= nb)
	{
		count++;
	}
	count--;
	if ((count * count < nb) || (count * count > nb))
		return (0);
	return (count);
}
