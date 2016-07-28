/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 01:49:58 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/13 21:24:31 by lmarques         ###   ########.fr       */
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

int		main(int argc, char *argv[])
{
	int	count;

	count = argc - 1;
	while (count > 0)
	{
		ft_putstr(argv[count]);
		ft_putchar('\n');
		count--;
	}
	return (0);
}
