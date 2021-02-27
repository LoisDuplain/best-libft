/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:56:35 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/27 15:02:50 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str, t_bool to_free)
{
	if (!str)
		return (NULL);
	if (to_free == TRUE)
		return (ft_strndup(str, ft_strlen(str), TRUE));
	return (ft_strndup(str, ft_strlen(str), FALSE));
}
