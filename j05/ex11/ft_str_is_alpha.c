/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 18:00:01 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/12 12:49:25 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (!((str[count] >= 'a' && str[count] <= 'z') ||
			(str[count] >= 'A' && str[count] <= 'Z')))
			return (0);
		count++;
	}
	return (1);
}
