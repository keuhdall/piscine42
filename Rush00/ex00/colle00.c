/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 11:26:33 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/09 15:04:28 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_outer_line(int length)
{
	int	count_length;

	count_length = 1;
	ft_putchar('o');
	while (count_length < length - 1 && length > 2)
	{
		ft_putchar('-');
		count_length++;
	}
	if (length > 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

void	ft_print_inner_line(int length)
{
	int	count_length;

	count_length = 1;
	ft_putchar('|');
	while (count_length < length - 1 && length > 2)
	{
		ft_putchar(' ');
		count_length++;
	}
	if (length > 1)
	{
		ft_putchar('|');
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
}

void	colle(int length, int height)
{
	int	count_height;

	count_height = 1;
	ft_print_outer_line(length);
	while (count_height < height - 1)
	{
		ft_print_inner_line(length);
		count_height++;
	}
	if (height >= 2)
		ft_print_outer_line(length);
}
