/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhammerc <mhammerc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 02:30:43 by mhammerc          #+#    #+#             */
/*   Updated: 2016/07/27 09:48:22 by mhammerc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

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

void	is_null(char *str)
{
	if (!str)
		exit(1);
}

void	ft_magic_copy(char **str, char buffer[BUF_SIZE + 1], int ret,
		int final_ret)
{
	char	*old_str;
	int		count;
	int		count2;

	count2 = 0;
	if (final_ret == 0)
		is_null(*str = malloc(sizeof(char) * (ret + 1)));
	else
	{
		old_str = *str;
		is_null(*str = malloc(sizeof(char) * (ret + final_ret + 1)));
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

char	*ft_read(int argc, char *argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];
	char	*str;
	int		ret;
	int		total_ret;

	str = 0;
	ft_flush_buffer(buf);
	total_ret = 0;
	if (argc == 1)
		fd = 0;
	else
		fd = open(argv, O_RDONLY);
	ret = 1;
	if (fd == -1)
		return (NULL);
	while (ret)
	{
		ret = read(fd, buf, BUF_SIZE);
		ft_magic_copy(&str, buf, ret, total_ret);
		total_ret += ret;
	}
	return (str);
}
