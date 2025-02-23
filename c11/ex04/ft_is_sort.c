/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 21:18:44 by msucu             #+#    #+#             */
/*   Updated: 2025/02/23 21:18:46 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	sira_yonu;
	int	temp;

	sira_yonu = 0;
	i = 0;
	while (i < length - 1)
	{
		temp = f(tab[i], tab[i + 1]);
		if (temp != 0 && sira_yonu != 0)
		{
			if (temp < 0 && sira_yonu > 0)
				return (0);
			if (temp > 0 && sira_yonu < 0)
				return (0);
		}
		if (temp != 0)
			sira_yonu = temp;
		i++;
	}
	return (1);
}
