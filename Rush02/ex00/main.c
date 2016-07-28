/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 13:09:48 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/24 23:23:01 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_flush_buffer(char buf[BUF_SIZE + 1])
{
	int	count;

	count = 0;
	while (count < BUF_SIZE)
	{
		buf[count] = 0;
		count++;
	}
}

void	ft_magic_copy(char **str, char buffer[BUF_SIZE + 1], int ret, \
		int final_ret)
{
	char	*old_str;
	int		count;
	int		count2;

	count2 = 0;
	if (final_ret == 0)
		*str = malloc(sizeof(char) * (ret + 1));
	else
	{
		old_str = *str;
		*str = malloc(sizeof(char) * (ret + final_ret + 1));
		while (count2 < final_ret)
		{
			(*str)[count2] = old_str[count2];
			count2++;
		}
		free(old_str);
	}
	count = 0;
	while (count < ret)
	{
		(*str)[count + count2] = buffer[count];
		count++;
	}
	(*str)[count + count2] = 0;
}

char	*ft_read(void)
{
	int		ret;
	int		total_ret;
	char	*buffer;
	char	*str;

	buffer = malloc(BUF_SIZE + 1);
	ft_flush_buffer(buffer);
	total_ret = 0;
	str = 0;
	while ((ret = read(0, buffer, BUF_SIZE)))
	{
		buffer[ret] = 0;
		ft_magic_copy(&str, buffer, ret, total_ret);
		total_ret += ret;
	}
	return (str);
}

int		main(void)
{
	int		count;
	int		total_ret;
	char	**str;

	count = 0;
	total_ret = 0;
	str = ft_split(ft_read());
	if (str == NULL)
	{
		ft_putbrackets_putnbr(ft_putnbr, 0);
		ft_putchar(' ');
		ft_putbrackets_putnbr(ft_putnbr, 0);
		ft_putchar('\n');
	}
	else
	{
		ft_putbrackets_putnbr(ft_putnbr, ft_strlen(str[0]));
		ft_putchar(' ');
		ft_putbrackets_putnbr(ft_putnbr, ft_get_height(str));
		ft_putchar('\n');
	}
	return (0);
}
