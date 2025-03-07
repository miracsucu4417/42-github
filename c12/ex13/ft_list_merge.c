/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:57:09 by msucu             #+#    #+#             */
/*   Updated: 2025/03/07 21:57:10 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*temp;

	temp = *begin_list1;
	if (temp == NULL)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = begin_list2;
}
