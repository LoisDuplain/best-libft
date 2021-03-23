/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_splitted_size.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:27:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/03/23 14:29:14 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_splitted_size(char **splitted)
{
	size_t	size;

	size = 0;
	while (splitted[size])
		size++;
	return (size);
}
