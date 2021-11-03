/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_str_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:43:40 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/03 12:59:26 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**copy_str_array(char **str_array)
{
	char	**new_array;
	size_t	index;

	new_array = NULL;
	index = 0;
	while (str_array[index])
	{
		new_array = ft_add_str_to_str_array(new_array,
				ft_strdup(str_array[index]),
				TRUE);
		index++;
	}
	return (new_array);
}
