/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 15:38:51 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/12 20:54:33 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	count;

	count = 0;
	while (s1[count] == s2[count])
	{
		if (s1[count] == '\0')
			return (0);
		count++;
	}
	return (*(unsigned char *)(s1) - *(unsigned char *)(s2));
}
