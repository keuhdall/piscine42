/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 07:32:37 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/14 22:01:56 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_lenwords(char *str)
{
	int	count_str;
	int	count_words;

	count_str = 0;
	count_words = 0;
	while (str[count_str] != '\0')
	{
		if (((str[count_str] != ' ' && str[count_str] != '\n' &&
		str[count_str] != '\t')) && (count_str == 0 ||
		str[count_str - 1] == ' ' || str[count_str - 1] == '\n' ||
		str[count_str - 1] == '\t'))
			count_words++;
		count_str++;
	}
	return (count_words);
}

int		ft_lenchars(char *str)
{
	int	count;

	count = 0;
	while (str[count] && str[count] != ' ' &&
	str[count] != '\n' && str[count] != '\t')
		count++;
	return (count);
}

char	*ft_copystr(char *str)
{
	int		count;
	char	*str2;

	str2 = 0;
	str2 = (char*)malloc(sizeof(str2) * (ft_lenchars(str) + 1));
	count = 0;
	if (str2)
	{
		while (str[count] && str[count] != ' ' &&
		str[count] != '\n' && str[count] != '\t')
		{
			str2[count] = str[count];
			count++;
		}
		str2[count] = '\0';
	}
	return (str2);
}

char	**ft_split_whitespaces(char *str)
{
	int		count_str;
	int		count_str2;
	char	**str2;

	count_str = 0;
	count_str2 = 0;
	str2 = 0;
	str2 = (char**)malloc(sizeof(str2) * (ft_lenwords(str) + 1));
	if (str2)
	{
		while (str[count_str] != '\0')
		{
			if ((str[count_str] != ' ' && str[count_str] != '\n' &&
			str[count_str] != '\t') && (count_str == 0 ||
			str[count_str - 1] == ' ' || str[count_str - 1] == '\n' ||
			str[count_str - 1] == '\t'))
			{
				str2[count_str2] = ft_copystr(&str[count_str]);
				count_str2++;
			}
			count_str++;
		}
		str2[count_str2] = 0;
	}
	return (str2);
}
