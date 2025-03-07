/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:27:31 by msucu             #+#    #+#             */
/*   Updated: 2025/03/07 21:27:33 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*current;

	if (begin_list == NULL)
	{
		return (NULL);
	}
	current = begin_list;
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}
