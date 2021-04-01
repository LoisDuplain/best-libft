/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:51:08 by lduplain          #+#    #+#             */
/*   Updated: 2021/04/01 11:28:00 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n, t_bool free_str)
{
	size_t	index;
	char	*result;

	if (!str)
		return (NULL);
	result = ft_calloc(n + 1, sizeof(*str));
	if (result == NULL)
		return (NULL);
	ft_bzero(result, n + 1);
	index = 0;
	while (str[index] && index < n)
	{
		result[index] = str[index];
		index++;
	}
	result[index] = 0;
	printf("Char: %zu | *Str: %zu | Result: {%s} | Size: %zu\n", sizeof(char), sizeof(*str), result, n);
	if (free_str)
		free((char *)str);
	return (result);
}
