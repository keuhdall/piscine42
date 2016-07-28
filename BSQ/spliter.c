/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spliter.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhammerc <mhammerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 14:32:19 by mhammerc          #+#    #+#             */
/*   Updated: 2016/07/27 09:51:20 by mhammerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		count_lines(char *str)
{
	int		i;
	int		lines;

	lines = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			++lines;
		++i;
	}
	return (lines);
}

void	cpy2(char **dest, char *src, int begin, int end)
{
	int		i;

	(*dest) = malloc(sizeof(**dest) * (end - begin + 1));
	if (!*dest)
		exit(1);
	i = 0;
	while (i < end - begin)
	{
		(*dest)[i] = src[begin + i];
		++i;
	}
	(*dest)[i] = '\0';
}

char	**split(char *str)
{
	int		lines;
	char	**result;
	int		i;
	int		j;
	int		begin;

	if (str == NULL)
		return (NULL);
	lines = count_lines(str);
	result = malloc(sizeof(*result) * (lines + 1));
	if (!result)
		exit(1);
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			++i;
		begin = i;
		while (str[i] != '\n' && str[i] != '\0')
			++i;
		cpy2(&result[j++], str, begin, i++);
	}
	result[lines] = 0;
	return (result);
}
