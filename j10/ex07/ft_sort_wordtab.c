/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 23:48:53 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/19 00:19:18 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sort_str(char *str1, char *str2)
{
	int count;

	count = 0;
	while (str1[count] == str2[count])
		count++;
	if (str1[count] > str2[count])
		return (1);
	else
		return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		count;
	char	*str_temp;

	count = 0;
	str_temp = 0;
	while (tab[count + 1] != 0)
	{
		if (ft_sort_str(tab[count], tab[count + 1]))
		{
			str_temp = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = str_temp;
			count = 0;
		}
		count++;
	}
}
