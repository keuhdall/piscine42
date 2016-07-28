/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 09:48:01 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/14 05:31:29 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

char	*ft_strdup(char *str)
{
	int		count;
	char	*str2;

	count = 0;
	str2 = malloc(sizeof(char) * (ft_strlen(str)) + 1);
	while (str[count] != '\0')
	{
		str2[count] = str[count];
		count++;
	}
	str2[count] = '\0';
	return (str2);
}
