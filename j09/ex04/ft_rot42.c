/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 02:15:47 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/15 12:18:52 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_alphabet(char c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

char	ft_rot16(char c)
{
	int	count;

	count = 0;
	while (count < 16)
	{
		c += 1;
		if (!ft_is_alphabet(c))
		{
			c -= 26;
		}
		count++;
	}
	return (c);
}

char	*ft_rot42(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		str[count] = ft_rot16(str[count]);
		count++;
	}
	return (str);
}
