/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 13:48:18 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/12 16:46:34 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count_src;
	int	count_dest;

	count_src = 0;
	count_dest = 0;
	while (dest[count_dest] != '\0')
		count_dest++;
	while (src[count_src] != '\0')
	{
		dest[count_dest] = src[count_src];
		count_dest++;
		count_src++;
	}
	dest[count_dest] = '\0';
	return (dest);
}
