/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:34:46 by lduplain          #+#    #+#             */
/*   Updated: 2021/09/23 15:36:01 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	c_index;

	c_index = 0;
	while ((s1[c_index] || s2[c_index]) && c_index < n)
	{
		if (s1[c_index] != s2[c_index])
			return ((unsigned char)s1[c_index] - (unsigned char)s2[c_index]);
		c_index++;
	}
	return (0);
}
