/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/08 13:44:06 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/08 15:23:52 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int	count;
	int	tmp;

	count = 0;
	tmp = 0;
	while (count < size - 1)
	{
		if (tab[count] > tab[count + 1])
		{
			tmp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = tmp;
			count = 0;
		}
		else
		{
			count++;
		}
	}
}
