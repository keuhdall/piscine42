/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 09:58:47 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/11 10:05:02 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	count;
	int	swap_sign;
	int	result;

	count = 0;
	swap_sign = 1;
	result = 0;
	if (str[count] == '-')
		swap_sign = -1;
	if (str[count] == '-' || str[count] == '+')
		count++;
	while (str[count] >= '0' && str[count] <= '9')
	{
		result = result * 10 + (str[count] - '0');
		count++;
	}
	return (result * swap_sign);
}
