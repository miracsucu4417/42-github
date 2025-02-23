/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 13:03:28 by msucu             #+#    #+#             */
/*   Updated: 2025/02/23 13:03:30 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*param;

	i = argc - 1;
	while (i > 0)
	{
		param = argv[i];
		while (*param)
		{
			write(1, param, 1);
			param++;
		}
		if (i != 1)
		{
			write(1, "\n", 1);
		}
		i--;
	}
	return (0);
}
