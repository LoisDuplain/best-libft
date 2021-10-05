/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_str_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:42:45 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/05 13:50:03 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**sort_str_array(char **str_array)
{
	char	**new_array;
	size_t	index;
	char	*tmp;

	new_array = copy_str_array(str_array);
	index = 0;
	while (index < ft_get_string_array_length(new_array) - 1)
	{
		if (ft_strcmp(new_array[index], new_array[index + 1]) > 0)
		{
			tmp = new_array[index];
			new_array[index] = new_array[index + 1];
			new_array[index + 1] = tmp;
			index = 0;
		}
		else
			index++;
	}
	return (new_array);
}
