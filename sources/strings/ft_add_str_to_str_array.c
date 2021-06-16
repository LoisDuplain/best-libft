/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_str_to_str_array.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:36:52 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/16 15:44:34 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_add_str_to_str_array(char **str_array, char *str,
	t_bool free_array)
{
	char	**result;
	size_t	array_length;
	size_t	index;

	if (str == NULL)
		return (str_array);
	array_length = ft_get_string_array_length(str_array);
	result = ft_calloc(array_length + 2, sizeof(char *));
	if (result == NULL)
		return (NULL);
	index = 0;
	while (index < array_length)
	{
		result[index] = str_array[index];
		index++;
	}
	result[index] = str;
	result[index + 1] = NULL;
	if (free_array)
		free(str_array);
	return (result);
}
