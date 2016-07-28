/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doop.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 22:09:06 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/19 21:50:17 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_tools.h"

int	ft_check_if_possible(char c, int nb)
{
	if (c == '/' && nb == 0)
	{
		write(1, "Stop : division by zero\n", 24);
		return (-1);
	}
	else if (c == '%' && nb == 0)
	{
		write(1, "Stop : modulo by zero\n", 22);
		return (-1);
	}
	return (0);
}

int	ft_handle_errors(int argc, char **argv, int nb2)
{
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*' &&
		argv[2][0] != '/' && argv[2][0] != '%')
	{
		write(1, "0", 1);
		return (0);
	}
	if (argc != 4)
		return (0);
	if (ft_check_if_possible(argv[2][0], nb2) == -1)
		return (0);
	return (1);
}

int	main(int argc, char *argv[])
{
	int		count;
	int		(*func_tab[5])(int, int);
	char	sign[5];

	func_tab[0] = &ft_addition;
	func_tab[1] = &ft_substraction;
	func_tab[2] = &ft_multiplication;
	func_tab[3] = &ft_division;
	func_tab[4] = &ft_modulo;
	sign[0] = '+';
	sign[1] = '-';
	sign[2] = '*';
	sign[3] = '/';
	sign[4] = '%';
	count = 0;
	if (ft_handle_errors(argc, argv, ft_atoi(argv[3])) == 0)
		return (0);
	while (count < 5)
	{
		if (sign[count] == argv[2][0])
			ft_putnbr(func_tab[count](ft_atoi(argv[1]), ft_atoi(argv[3])));
		count++;
	}
	return (0);
}
