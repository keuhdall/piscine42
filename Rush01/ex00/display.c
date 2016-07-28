/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odoussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 12:33:53 by odoussau          #+#    #+#             */
/*   Updated: 2016/07/17 12:02:16 by odoussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		if (count != 8)
			ft_putchar(' ');
		count++;
	}
	ft_putchar('\n');
}

void	display_array(char **tab)
{
	int count;
	int count_string;

	count_string = 1;
	while (count_string != 10)
	{
		ft_putstr(tab[count_string]);
		count_string++;
	}
}
