/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 13:13:46 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/24 23:19:46 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count])
	{
		ft_putchar(str[count]);
		count++;
	}
}

void	ft_putnbr(int nb)
{
	long int long_nb;

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

void	ft_putbrackets_putnbr(void (f)(int), int nb)
{
	ft_putchar('[');
	(f)(nb);
	ft_putchar(']');
}

void	ft_putbrackets_putstr(void (f)(char *), char *str)
{
	ft_putchar('[');
	(f)(str);
	ft_putchar(']');
}
