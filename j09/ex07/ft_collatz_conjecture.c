/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 10:01:16 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/15 10:25:34 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	static int	count = 0;

	if (base == 1)
		return (count);
	else if (base % 2 == 0)
	{
		count++;
		return (ft_collatz_conjecture(base / 2));
	}
	else
	{
		count++;
		return (ft_collatz_conjecture(3 * base + 1));
	}
}
