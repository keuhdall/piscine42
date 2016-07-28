/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_tab.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 00:22:51 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/19 00:41:28 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_tab(char **tab, int (*cmp)(char *, char *))
{
	int		count;
	char	*str_temp;

	count = 0;
	str_temp = 0;
	while (tab[count + 1] != 0)
	{
		if ((*cmp)(tab[count], tab[count + 1]) > 0)
		{
			str_temp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = str_temp;
			count = 0;
		}
		count++;
	}
}
