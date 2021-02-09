/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmult_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 11:07:51 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/09 13:38:14 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmult_front(	\
	char *to_mult,			\
	char *back,				\
	size_t n,				\
	t_bool free_back)
{
	char	*result;
	size_t	counter;

	if (n <= 0)
		return (NULL);
	result = ft_append_strs(to_mult, back, FALSE, free_back);
	counter = 1;
	while (counter < n)
	{
		result = ft_append_strs(to_mult, result, FALSE, TRUE);
		counter++;
	}
	return (result);
}
