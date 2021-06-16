/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_char_to_str.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 15:29:05 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/16 15:30:18 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_append_char_to_str(char *str, char c)
{
	char	*result;
	size_t	str_len;
	size_t	index;

	str_len = ft_strlen(str);
	result = ft_calloc(str_len + 2, sizeof(char));
	if (result == NULL)
		return (NULL);
	index = 0;
	while (index < str_len)
	{
		result[index] = str[index];
		index++;
	}
	result[index] = c;
	result[index + 1] = '\0';
	if (str != NULL)
		free(str);
	return (result);
}
