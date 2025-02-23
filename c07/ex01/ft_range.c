/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:08:54 by msucu             #+#    #+#             */
/*   Updated: 2025/02/23 15:08:56 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	len;
	int	i;
	int	*dizi;

	if (min >= max)
		return (NULL);
	len = max - min;
	dizi = (int *)malloc(sizeof(int) * len);
	if (dizi == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		dizi[i] = min;
		i++;
		min++;
	}
	return (dizi);
}
