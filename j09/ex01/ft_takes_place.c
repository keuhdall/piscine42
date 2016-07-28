/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 01:15:07 by lmarques          #+#    #+#             */
/*   Updated: 2016/07/15 01:35:50 by lmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int tmp_hour;

	tmp_hour = hour;
	if ((hour > 0) && (hour < 11))
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n"
			, hour, hour + 1);
	if ((hour > 12) && (hour < 23))
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n"
			, hour - 12, hour - 11);
	if (hour == 11)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 P.M.\n"
			, hour, 12);
	if (hour == 12)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 P.M.\n"
			, hour, 12 - 11);
	if (hour == 24 || hour == 0)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 A.M. AND %d.00 A.M.\n"
			, 12, 1);
	if (hour == 23)
		printf("THE FOLLOWING TAKES PLACE BETWEEN %d.00 P.M. AND %d.00 A.M.\n"
			, hour - 12, 12);
}
