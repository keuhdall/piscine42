/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sudoku.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odoussau <odoussau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 20:48:39 by odoussau          #+#    #+#             */
/*   Updated: 2016/07/17 21:37:23 by odoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECK_SUDOKU_H
# define CHECK_SUDOKU_H

typedef int	t_layer[9][9];
typedef int	t_checker[9];

void	add_sudoku(t_layer *sudoku, t_layer upper);
void	update_sudoku(t_layer *sudoku, t_layer upper);
void	empty_tab(t_checker *tab);
int		check_line(t_layer sudoku);
int		check_col(t_layer sudoku);
int		check_square(t_layer sudoku);
int		check_little_square(t_layer sudoku, t_checker tab, int x, int y);

#endif
