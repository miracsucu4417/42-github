/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:18:11 by msucu             #+#    #+#             */
/*   Updated: 2025/02/22 21:18:14 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_atoi(char *str)
{
	int	isaret;
	int	nb;

	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	isaret = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			isaret = -isaret;
		str++;
	}
	nb = 0;
	while (*str >= '0' && *str <= '9')
	{
		nb *= 10;
		nb += *str - '0';
		str++;
	}
	return (nb * isaret);
}
