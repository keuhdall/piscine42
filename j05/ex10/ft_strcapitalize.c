/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 17:31:56 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/12 22:53:42 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 'A' && str[count] <= 'Z')
			str[count] += 32;
		count++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	count;

	count = 0;
	ft_strlowcase(str);
	if (str[count] <= 'a' && str[count] >= 'z')
	{
		str[count] -= 32;
		count++;
	}
	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
			if (!(str[count - 1] >= 'A' && str[count - 1] <= 'Z') ||
				(str[count - 1] >= 'a' && str[count - 1] <= 'z') ||
				(str[count - 1] >= '0' && str[count - 1] <= '9'))
				str[count] -= 32;
		count++;
	}
	return (str);
}
