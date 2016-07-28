/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 15:15:48 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/12 16:50:09 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int	count_src;
	int	count_dest;

	count_src = 0;
	count_dest = 0;
	while (dest[count_dest] != '\0')
		count_dest++;
	while (count_src < nb)
	{
		dest[count_dest] = src[count_src];
		count_dest++;
		count_src++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
