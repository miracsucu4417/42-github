/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:30:14 by msucu             #+#    #+#             */
/*   Updated: 2025/03/05 21:32:30 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

int	main(int argc, char **argv)
{
	int	file;

	if (argc <= 1)
		ft_puterr("File name missing.\n");
	else if (argc > 2)
		ft_puterr("Too many arguments.\n");
	else
	{
		file = open(argv[1], O_RDONLY);
		if (file == -1)
		{
			ft_puterr("Cannot read file.\n");
			return (1);
		}
		ft_display_file(file);
		close(file);
	}
	return (0);
}
