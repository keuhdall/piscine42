/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 13:33:47 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/18 22:04:30 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	count;

	count = 0;
	while (tab[count] != 0)
	{
		if ((*f)(tab[count]) == 1)
			return (1);
		count++;
	}
	return (0);
}
