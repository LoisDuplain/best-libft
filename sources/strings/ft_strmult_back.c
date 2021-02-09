/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmult_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 11:27:18 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/09 13:37:38 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmult_back(	\
	char *to_mult,			\
	char *front,			\
	size_t n,				\
	t_bool free_front)
{
	char	*result;
	size_t	counter;

	if (n <= 0)
		return (NULL);
	result = ft_append_strs(front, to_mult, free_front, FALSE);
	counter = 1;
	while (counter < n)
	{
		result = ft_append_strs(result, to_mult, TRUE, FALSE);
		counter++;
	}
	return (result);
}
