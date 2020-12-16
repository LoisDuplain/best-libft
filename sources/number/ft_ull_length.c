/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ull_length.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 12:22:35 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/16 12:23:38 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ull_length(unsigned long long number)
{
	size_t	result;

	result = 0;
	while (number != 0)
	{
		number /= 10;
		result++;
	}
	return (result);
}
