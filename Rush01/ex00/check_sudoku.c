/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sudoku.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odoussau <odoussau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 20:47:57 by odoussau          #+#    #+#             */
/*   Updated: 2016/07/17 22:06:58 by odoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "check_sudoku.h"
#include <stdio.h>

void	add_sudoku(t_layer *sudoku, t_layer upper)
{
	int x;
	int y;
	int end;

	y = 0;
	end = 0;
	while (y != 9 && end == 0)
	{
		x = 0;
		while (x != 9 && end == 0)
		{
			if (upper[y][x])
			{
				(*sudoku)[y][x] = (*sudoku)[y][x] + 1;
				end = 1;
			}
			x++;
		}
		y++;
	}
}

void	update_sudoku(t_layer *sudoku, t_layer upper)
{
	int x;
	int y;
	int add;

	y = 0;
	add = 0;
	while (y != 9)
	{
		x = 0;
		while (x != 9)
		{
			if (add == 1 && upper[y][x])
			{
				(*sudoku)[y][x] = (*sudoku)[y][x] + 1;
				add = 0;
			}
			if ((*sudoku)[y][x] == 10)
			{
				(*sudoku)[y][x] = 1;
				add = 1;
			}
			x++;
		}
		y++;
	}
}
void	empty_tab(t_checker *tab)
{
	int i;

	i = 0;
	while (i != 9)
	{
		(*tab)[i] = 0;
		i++;
	}
}

int		check_line(t_layer sudoku)
{
	int			y;
	int			x;
	t_checker	tab;

	y = 0;
	while (y != 9)
	{
		x = 0;
		empty_tab(&tab);
		while (x != 9)
		{
			tab[sudoku[y][x]] = tab[sudoku[y][x]] + 1;
			if (tab[sudoku[y][x]] > 1)
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

int		check_col(t_layer sudoku)
{
	int y;
	int x;
	int tab[9];

	x = 0;
	while (x != 9)
	{
		y = 0;
		empty_tab(&tab);
		while (y != 9)
		{
			tab[sudoku[y][x]] = tab[sudoku[y][x]] + 1;
			if (tab[sudoku[y][x]] > 1)
				return (0);
			y++;
		}
		x++;
	}
	return (1);
}

int		check_square(t_layer sudoku)
{
	t_checker	tab;
	int			y;
	int			x;

	y = 0;
	empty_tab(&tab);
	while (y != 3)
	{
		x = 0;
		while (x != 3)
		{
			if (!check_little_square(sudoku, tab, x, y))
				return (0);
			x++;
		}
		y++;
	}
	return (1);
}

int		check_little_square(t_layer sudoku, t_checker tab, int x, int y)
{
	int	x_temp;
	int	y_temp;

	y_temp = 0;
	while (y_temp != 3)
	{
		x_temp = 0;
		while (x_temp != 3)
		{
			tab[sudoku[y * 3 + y_temp][x * 3 + y_temp]] =
			tab[sudoku[y * 3 + y_temp][x * 3 + y_temp]] + 1;
			if (tab[sudoku[y * 3 + y_temp][x * 3 + x_temp]] > 1)
				return (0);
			x_temp++;
		}
		y_temp++;
	}
	return (1);
}
