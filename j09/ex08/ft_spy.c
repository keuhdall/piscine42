/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 10:30:20 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/15 12:19:16 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	ft_char_lowcase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

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

int		ft_str_eq(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] != '\0' && s2[count] != '\0')
	{
		if (s1[count] != s2[count])
			return (0);
		count++;
	}
	if (s1[count] != s2[count])
		return (0);
	return (1);
}

int		ft_test_str(char *str, int len)
{
	char	array[len + 1];
	int		count_str;
	int		count_array;

	count_str = 0;
	count_array = 0;
	while (str[count_str] != '\0')
	{
		if (str[count_str] != ' ')
			array[count_array++] = ft_char_lowcase(str[count_str]);
		count_str++;
	}
	array[count_array] = '\0';
	if (ft_str_eq(array, "president") == 1 ||
		ft_str_eq(array, "attack") == 1 ||
		ft_str_eq(array, "powers") == 1)
	{
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int	count;
	int	len;

	count = 1;
	while (count < argc)
	{
		len = ft_strlen(argv[count]);
		if (ft_test_str(argv[count], len) == 1)
			return (write(1, "Alert!!!\n", 9));
		count++;
	}
	return (0);
}
