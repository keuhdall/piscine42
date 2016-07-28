/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_and_display.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odoussau <odoussau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 20:01:33 by odoussau          #+#    #+#             */
/*   Updated: 2016/07/17 21:53:34 by odoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_AND_DISPLAY_H
# define STRING_AND_DISPLAY_H
#include "check_sudoku.h"

void	ft_putchar(char c);
void	display_sudoku(t_layer sudoku);
void	display_array(char **tab);
int		check_array(int argc, char **argv);

#endif
