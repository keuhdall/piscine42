/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/18 14:17:41 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/18 22:02:03 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	count;

	count = 0;
	while (count < length)
	{
		if ((*f)(tab[count], tab[count + 1]) > 0)
			return (0);
		count++;
	}
	return (1);
}
