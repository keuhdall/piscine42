/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 23:55:01 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/24 04:31:48 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_count_line(char *str)
{
	int	count;
	int	count_lines;

	count = 0;
	count_lines = 1;
	while (str[count])
	{
		if (str[count] == '\n' && (str[count == 0] ||
			str[count - 1] == '\n'))
			count_lines++;
		count++;
	}
	return (count_lines);
}

int		ft_strlen_split(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0' && str[count] != '\n')
		count++;
	return (count);
}

char	*ft_cpystr(char *str)
{
	int		count;
	char	*str2;

	count = 0;
	str2 = 0;
	str2 = (char*)malloc(sizeof(str2) * (ft_strlen_split(str) + 1));
	if (str2)
	{
		while (str[count] != '\0' && str[count] != '\n')
		{
			str2[count] = str[count];
			count++;
		}
		str2[count] = '\0';
	}
	return (str2);
}

char	**ft_split(char *str)
{
	int		count;
	int		count2;
	char	**str2;

	count = 0;
	count2 = 0;
	if (!str)
		return (NULL);
	str2 = (char**)malloc(sizeof(str2) * (ft_count_line(str) + 1));
	if (str2)
	{
		while (str[count])
		{
			if (str[count] != '\n' &&
				(count == 0 || str[count - 1] == '\n'))
			{
				str2[count2] = ft_cpystr(&str[count]);
				count2++;
			}
			count++;
		}
		str2[count2] = 0;
	}
	return (str2);
}
