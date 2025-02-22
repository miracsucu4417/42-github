/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 23:26:05 by msucu             #+#    #+#             */
/*   Updated: 2025/02/22 23:26:07 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	result = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
