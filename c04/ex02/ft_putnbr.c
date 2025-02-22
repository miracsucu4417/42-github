/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:06:08 by msucu             #+#    #+#             */
/*   Updated: 2025/02/22 21:06:10 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	temp;

	temp = nb;
	if (temp < 0)
	{
		ft_putchar('-');
		temp = -temp;
	}
	if (temp > 9)
	{
		ft_putnbr(temp / 10);
		ft_putchar(temp % 10 + '0');
	}
	else
	{
		ft_putchar(temp + '0');
	}
}
