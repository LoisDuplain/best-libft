/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_string_array.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:45:42 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/16 15:46:16 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_destroy_string_array(char ***string_array)
{
	size_t	index;

	if (*string_array != NULL)
	{
		index = 0;
		while ((*string_array)[index])
		{
			free((*string_array)[index]);
			(*string_array)[index] = NULL;
			index++;
		}
		free(*string_array);
		*string_array = NULL;
	}
	return (NULL);
}
