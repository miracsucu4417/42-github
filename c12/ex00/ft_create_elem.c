/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 22:24:36 by msucu             #+#    #+#             */
/*   Updated: 2025/02/23 22:24:38 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*list_item;

	list_item = malloc(sizeof(t_list));
	if (list_item == NULL)
		return (NULL);
	list_item->data = data;
	list_item->next = NULL;
	return (list_item);
}
