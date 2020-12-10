/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:51:08 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/09 16:55:09 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n)
{
	size_t	index;
	char	*result;

	if (!str)
		return (NULL);
	if (n > ft_strlen(str))
		n = ft_strlen(str);
	if (!(result = ft_calloc(n + 1, sizeof(*str))))
		return (NULL);
	index = 0;
	while (index < n)
	{
		result[index] = str[index];
		index++;
	}
	result[index] = 0;
	return (result);
}
