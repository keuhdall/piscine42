/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_word_tables.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 22:10:32 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/14 22:41:30 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	**ft_split_whitespaces(char *str);

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int	count;

	count = 0;
	while (tab[count] != 0)
	{
		ft_putstr(tab[count]);
		ft_putchar('\n');
		count++;
	}
}
