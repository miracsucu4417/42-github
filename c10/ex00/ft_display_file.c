/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 21:35:14 by msucu             #+#    #+#             */
/*   Updated: 2025/03/05 21:43:45 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "ft.h"

void	ft_display_file(int file)
{
	int		bytes_read;
	char	buffer[20];

	while (1)
	{
		bytes_read = read(file, buffer, sizeof(buffer) - 1);
		if (bytes_read <= 0)
		{
			break ;
		}
		buffer[bytes_read] = '\0';
		ft_putstr(buffer);
	}
}
