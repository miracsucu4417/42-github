/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 21:02:16 by msucu             #+#    #+#             */
/*   Updated: 2025/02/23 21:02:18 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	sayac;

	i = 0;
	sayac = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			sayac++;
		i++;
	}
	return (sayac);
}
