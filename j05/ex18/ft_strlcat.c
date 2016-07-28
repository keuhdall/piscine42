/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 16:57:57 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/12 18:16:38 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	count_src;
	unsigned int	count_dest;

	count_src = 0;
	count_dest = 0;
	while (des[count_dest] != '\0')
		count_dest++;
	while (count_src < size)
	{
		dest[count_dest] = src[count_src];
		count_dest++;
		count_src++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
