/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 02:08:52 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/13 22:20:37 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count++;
	}
}

int		ft_sort_str(char *str1, char *str2)
{
	int count;

	count = 0;
	while (str1[count] == str2[count])
		count++;
	if (str1[count] > str2[count])
		return (1);
	else
		return (0);
}

int		main(int argc, char *argv[])
{
	int		count;
	char	*tmp;

	count = 0;
	while (count < argc - 1)
	{
		if (ft_sort_str(argv[count], argv[count + 1]) == 1)
		{
			tmp = argv[count];
			argv[count] = argv[count + 1];
			argv[count + 1] = tmp;
			count = 0;
		}
		count++;
	}
	count = 1;
	while (count < argc)
	{
		ft_putstr(argv[count]);
		ft_putchar('\n');
		count++;
	}
	return (0);
}
