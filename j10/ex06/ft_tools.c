/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 20:26:34 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/18 22:02:18 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int	count;
	int	swap_sign;
	int	result;

	count = 0;
	swap_sign = 1;
	result = 0;
	if (str[count] == '-')
		swap_sign = -1;
	if (str[count] == '-' || str[count] == '+')
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = result * 10 + (str[count] - '0');
		count++;
	}
	return (result * swap_sign);
}

void	ft_putnbr(int nb)
{
	long int	long_nb;

	long_nb = nb;
	if (long_nb < 0)
	{
		ft_putchar('-');
		long_nb = -long_nb;
	}
	if (long_nb > 9)
		ft_putnbr(long_nb / 10);
	ft_putchar(long_nb % 10 + '0');
}
