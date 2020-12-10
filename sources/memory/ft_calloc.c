/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 16:04:16 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/09 17:58:10 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t quantity, size_t type_size)
{
	void	*result;

	if (!(result = malloc(quantity * type_size)))
		return (NULL);
	ft_bzero(result, quantity * type_size);
	return (result);
}
