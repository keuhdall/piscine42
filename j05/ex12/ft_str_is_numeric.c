/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 18:14:11 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/12 12:49:42 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	count;

	count = 0;
	if (str[0] == '\0')
		return (1);
	while (str[count] != '\0')
	{
		if (!(str[count] >= '0' && str[count] <= '9'))
			return (0);
		count++;
	}
	return (1);
}
