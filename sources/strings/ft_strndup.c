/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:51:08 by lduplain          #+#    #+#             */
/*   Updated: 2021/04/01 10:50:32 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *str, size_t n, t_bool free_str)
{
	char	*result;

	if (!str)
		return (NULL);
	result = ft_calloc(n + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	ft_bzero(result, n + 1);
	ft_strcpy(str, result);
	if (free_str)
		free((char *)str);
	return (result);
}
