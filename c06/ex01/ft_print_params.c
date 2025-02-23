/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 12:53:55 by msucu             #+#    #+#             */
/*   Updated: 2025/02/23 12:53:56 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*param;

	i = 1;
	while (i < argc)
	{
		param = argv[i];
		while (*param)
		{
			write(1, param, 1);
			param++;
		}
		if (i < argc - 1)
		{
			write(1, "\n", 1);
		}
		i++;
	}
	return (0);
}
