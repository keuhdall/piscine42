/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odoussau <odoussau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 13:13:48 by odoussau          #+#    #+#             */
/*   Updated: 2016/07/17 22:26:09 by odoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "main.h"
#include "string_and_display.h"
#include "check_sudoku.h"

void	convert_str(int argc, char **argv, t_layer *tab)
{
	int count;
	int count_string;
	int value;

	count_string = 1;
	while (count_string != 10)
	{
		count = 0;
		while (argv[count_string][count] != '\0')
		{
			value = argv[count_string][count];
			if (value == '.')
				(*tab)[count_string - 1][count] = 0;
			else
				(*tab)[count_string - 1][count] = value - '0';
			count++;
		}
		count_string++;
	}
}

void	create_upper(t_layer tab, t_layer *upper)
{
	int x;
	int y;

	y = 0;
	while (y != 9)
	{
		x = 0;
		while (x != 9)
		{
			if (tab[y][x] == 0)
				(*upper)[y][x] = 1;
			else
				(*upper)[y][x] = 0;
			x++;
		}
		y++;
	}
}

void	init_sudoku(t_layer *sudoku, t_layer upper)
{
	int x;
	int y;

	y = 0;
	while (y != 9)
	{
		x = 0;
		while (x != 9)
		{
			if (upper[y][x])
				(*sudoku)[y][x] = 1;
			x++;
		}
		y++;
	}
}

int		main(int argc, char **argv)
{
	t_layer sudoku;
	t_layer upper;

	if (check_array(argc, argv))
	{
		printf("good\n");
		convert_str(argc, argv, &sudoku);
		create_upper(sudoku, &upper);
		init_sudoku(&sudoku, upper);
		while (check_square(sudoku) == 0 && check_col(sudoku) == 0 && check_line(sudoku) == 0)
		{
			printf("%d,%d,%d,",check_square(sudoku),check_col(sudoku),check_line(sudoku));
			add_sudoku(&sudoku, upper);
			update_sudoku(&sudoku, upper);
		}
		display_sudoku(sudoku);
		printf("gg");
	}
	else
		printf("error");
	return (1);
}
