/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:56:35 by lduplain          #+#    #+#             */
/*   Updated: 2021/03/24 17:21:43 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str, t_bool free_str)
{
	if (!str)
		return (NULL);
	if (free_str == TRUE)
		return (ft_strndup(str, ft_strlen(str), TRUE));
	return (ft_strndup(str, ft_strlen(str), FALSE));
}
