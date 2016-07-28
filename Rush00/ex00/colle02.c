/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 15:58:02 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/09 16:30:56 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_first_line(int x)
{
	int	count_x;

	count_x = 1;
	ft_putchar('A');
	while (count_x < x - 1)
	{
		ft_putchar('B');
		count_x++;
	}
	if (x > 1)
	{
		ft_putchar('A');
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

void	ft_print_last_line(int x)
{
	int	count_x;

	count_x = 1;
	ft_putchar('C');
	while (count_x < x - 1)
	{
		ft_putchar('B');
		count_x++;
	}
	if (x > 1)
	{
		ft_putchar('C');
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

void	ft_print_inner_line(int x)
{
	int	count_x;

	count_x = 1;
	ft_putchar('B');
	while (count_x < x - 1)
	{
		ft_putchar(' ');
		count_x++;
	}
	if (x > 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

void	colle(int x, int y)
{
	int count_y;

	count_y = 1;
	ft_print_first_line(x);
	while (count_y < y - 1)
	{
		ft_print_inner_line(x);
		count_y++;
	}
	if (y > 1)
		ft_print_last_line(x);
}
