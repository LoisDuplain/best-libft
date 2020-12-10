/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_strs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:25:16 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/10 12:25:24 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_append_strs(char *s1, char *s2, t_bool free_s1, t_bool free_s2)
{
	char	*result;
	size_t	result_size;
	size_t	s1_length;

	result_size = ft_strlen(s1) + ft_strlen(s2) + 1;
	if (!(result = ft_calloc(result_size, sizeof(char))))
		return (NULL);
	s1_length = ft_strcpy(s1, result);
	ft_strcpy(s2, &result[s1_length]);
	if (free_s1)
		free((void *)s1);
	if (free_s2)
		free((void *)s2);
	return (result);
}
