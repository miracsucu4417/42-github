/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msucu <msucu@student.42kocaeli.com.tr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 10:58:50 by msucu             #+#    #+#             */
/*   Updated: 2025/02/22 10:58:52 by msucu            ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_first;

	i = 0;
	is_first = 1;
	while (str[i] != '\0')
	{
		if (is_first && str[i] >= 'a' && str[i] <= 'z')
			str[i] += ('A' - 'a');
		else if (!is_first && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ('a' - 'A');
		is_first = 0;
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')))
			is_first = 1;
		i++;
	}
	return (str);
}
