/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 21:47:48 by msucu             #+#    #+#             */
/*   Updated: 2025/03/07 21:47:49 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*simdiki;
	t_list	*sonraki;
	t_list	*onceki;

	if (*begin_list == NULL)
		return ;
	onceki = *begin_list;
	simdiki = onceki->next;
	if (simdiki == NULL)
		return ;
	sonraki = simdiki->next;
	while (1)
	{
		simdiki->next = onceki;
		if (sonraki == NULL)
			break ;
		onceki = simdiki;
		simdiki = sonraki;
		sonraki = sonraki->next;
	}
	(*begin_list)->next = NULL;
	*begin_list = simdiki;
}
