/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:51:08 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/27 15:04:43 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n, t_bool to_free)
{
	size_t	index;
	char	*result;

	if (!str)
		return (NULL);
	if (n > ft_strlen(str))
		n = ft_strlen(str);
	result = ft_calloc(n + 1, sizeof(*str));
	if (!result)
		return (NULL);
	index = 0;
	while (index < n)
	{
		result[index] = str[index];
		index++;
	}
	result[index] = 0;
	if (to_free == TRUE)
		free((void *)str);
	return (result);
}
