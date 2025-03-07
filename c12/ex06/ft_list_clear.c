/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:44:44 by msucu             #+#    #+#             */
/*   Updated: 2025/03/07 21:44:45 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list, void (*free_fct)(void *))
{
	t_list	*temp;
	t_list	*onceki;

	if (begin_list == NULL || *begin_list == NULL)
		return ;
	temp = *begin_list;
	while (temp != NULL)
	{
		onceki = (temp->next);
		free_fct(temp->data);
		free(temp);
		temp = onceki;
	}
	*begin_list = NULL;
}
