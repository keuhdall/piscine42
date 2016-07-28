/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_and_display.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odoussau <odoussau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 12:33:53 by odoussau          #+#    #+#             */
/*   Updated: 2016/07/17 22:25:00 by odoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "check_sudoku.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void display_sudoku(t_layer sudoku)
{
	int	x;
	int	y;
	char	disp;

	y = 0;
	disp = '0';
	while (y != 9)
	{
		x = 0;
		while (x != 9)
		{
			ft_putchar(disp + sudoku[y][x]);
			if (x != 8)
				ft_putchar(' ');
			x++;
		}
		y++;
		ft_putchar('\n');
	}
}

int		check_array(int argc, char **argv)
{
	int count;
	int count_string;
	int value;

	count_string = 1;
	if (argc == 10)
	{
		while (count_string != 10)
		{
			count = 0;
			while (argv[count_string][count] != '\0')
			{
				value = argv[count_string][count];
				if (!((value >= '0' && value <= '9') || value == '.'))
					return (0);
				count++;
			}
			if (count != 9)
				return (0);
			count_string++;
		}
		return (1);
	}
	else
		return (0);
}
