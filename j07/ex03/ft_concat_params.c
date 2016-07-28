/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 18:56:20 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/14 06:52:06 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int		ft_get_all_chars(int argc, char **argv)
{
	int	count_argc;
	int	count_chars;

	count_argc = 0;
	count_chars = 0;
	while (count_argc < argc)
	{
		count_chars += ft_strlen((argv)[count_argc]);
		count_argc++;
	}
	return (count_chars);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		count_argc;
	int		count_argv;
	int		count_chars;
	int		count_str;
	char	*str;

	count_argc = 1;
	count_argv = 0;
	count_chars = ft_get_all_chars(argc, argv);
	count_str = 0;
	str = malloc(sizeof(char) * (count_chars + argc));
	while (count_argc < argc)
	{
		while (argv[count_argc][count_argv] != '\0')
			str[count_str++] = argv[count_argc][count_argv++];
		str[count_str] = '\n';
		count_str++;
		count_argv = 0;
		count_argc++;
	}
	str[count_str - 1] = '\0';
	return (str);
}
