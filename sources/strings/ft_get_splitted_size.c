/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_splitted_size.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 14:27:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/06/16 15:35:33 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_splitted_size(char **splitted)
{
	return (ft_get_string_array_length(splitted));
}
