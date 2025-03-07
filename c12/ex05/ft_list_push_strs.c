/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:39:38 by msucu             #+#    #+#             */
/*   Updated: 2025/03/07 21:39:39 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*begin_list;
	t_list	*new;
	int		i;

	begin_list = NULL;
	i = 0;
	while (i < size)
	{
		new = ft_create_elem(strs[i]);
		if (begin_list == NULL)
			begin_list = new;
		else
		{
			new->next = begin_list;
			begin_list = new;
		}
		i++;
	}
	return (begin_list);
}
