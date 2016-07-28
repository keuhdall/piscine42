/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tools.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 13:03:27 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/21 17:32:03 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c, int out)
{
	write(out, &c, 1);
}

void	ft_putstr(char *str, int out)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count], out);
		count++;
	}
}
