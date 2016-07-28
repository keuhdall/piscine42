/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/06 14:41:29 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/06 23:16:18 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_all(char first_n, char second_n, char third_n, char fourth_n)
{
	ft_putchar(first_n);
	ft_putchar(second_n);
	ft_putchar(' ');
	ft_putchar(third_n);
	ft_putchar(fourth_n);
	if (!(first_n == '9' && second_n == '8' &&
		third_n == '9' && fourth_n == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2_second_part(char first_n, char second_n)
{
	char	third_n;
	char	fourth_n;

	third_n = first_n;
	fourth_n = second_n + 1;
	while (third_n <= '9')
	{
		while (fourth_n <= '9')
		{
			ft_print_all(first_n, second_n, third_n, fourth_n);
			fourth_n++;
		}
		fourth_n = '0';
		third_n++;
	}
}

void	ft_print_comb2(void)
{
	char	first_n;
	char	second_n;

	first_n = '0';
	while (first_n <= '9')
	{
		second_n = '0';
		while (second_n <= '9')
		{
			ft_print_comb2_second_part(first_n, second_n);
			second_n++;
		}
		first_n++;
	}
}
