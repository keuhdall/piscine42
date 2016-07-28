/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 15:06:00 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/12 21:27:50 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strstr(char *str, char *to_find)
{
	int	len;
	int	i;
	int	j;
	int	k;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	len = ft_strlen(to_find);
	while (str[i] != '\0')
	{
		j = i;
		k = 0;
		while (str[j] == to_find[k])
		{
			k++;
			j++;
		}
		if (k >= len)
			return (str + i);
		i++;
	}
	return (0);
}
