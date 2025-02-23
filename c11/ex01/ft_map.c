/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 20:50:26 by msucu             #+#    #+#             */
/*   Updated: 2025/02/23 20:50:28 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*new_array;
	int	i;

	new_array = (int *)malloc(sizeof(int) * length);
	if (new_array == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new_array[i] = f(tab[i]);
		i++;
	}
	return (new_array);
}
