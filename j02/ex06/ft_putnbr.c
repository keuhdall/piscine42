/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 23:40:42 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/07 19:36:41 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int	swap_to_negative;

	swap_to_negative = 0;
	if (nb < 0)
	{
		nb = -nb;
		swap_to_negative = 1;
	}
	if (nb > 10)
	{
		if (swap_to_negative == 1)
		{
			ft_putchar('-');
			swap_to_negative = 0;
		}
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
	else
	{
		if (swap_to_negative == 1)
			ft_putchar('-');
		ft_putchar(nb + '0');
	}
}
