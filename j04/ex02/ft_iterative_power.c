/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 15:32:31 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/09 13:59:21 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	count;
	int	result;

	count = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (count < power)
	{
		result = result * nb;
		count++;
	}
	return (result);
}
