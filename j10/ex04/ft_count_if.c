/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 13:58:48 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/18 22:01:25 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	count;
	int	count_returns;

	count = 0;
	count_returns = 0;
	while (tab[count] != 0)
	{
		if ((*f)(tab[count]) == 1)
			count_returns++;
		count++;
	}
	return (count_returns);
}
