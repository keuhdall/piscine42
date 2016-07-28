/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 21:00:49 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/09 23:42:17 by lmarques         ###   ########.fr       */
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
	return (count);
}

int	ft_is_prime(int nb)
{
	int	count;

	count = 3;
	if (nb == 1)
		return (0);
	if (nb == 2)
		return (1);
	while (count < ft_sqrt(nb))
	{
		if (nb % count == 0)
			return (0);
		count+=2;
	}
	return (1);
}
