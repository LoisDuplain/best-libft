/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:15:02 by lduplain          #+#    #+#             */
/*   Updated: 2021/04/01 11:41:06 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strcpy(const char *source, char *destination)
{
	size_t	source_length;
	size_t	index;

	if (!destination || !source)
		return (0);
	source_length = ft_strlen(source);
	index = 0;
	while (index < source_length)
	{
		destination[index] = source[index];
		index++;
	}
	destination[index] = 0;
	return (source_length);
}
