/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 12:46:29 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/08 23:22:26 by lmarques         ###   ########.fr       */
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

char	*ft_strrev(char *str)
{
	int		str_size;
	int		count;
	char	tmp;

	count = 0;
	str_size = ft_strlen(str);
	while (count < (ft_strlen(str) / 2))
	{
		tmp = str[count];
		str[count] = str[str_size - 1];
		str[str_size - 1] = tmp;
		count++;
		str_size--;
	}
	return (str);
}
