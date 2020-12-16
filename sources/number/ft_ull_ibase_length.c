/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ull_ibase_length.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 13:05:34 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/16 13:08:48 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ull_ibase_length(unsigned long long number, int ibase)
{
	size_t	result;

	result = 0;
	while (number != 0)
	{
		number /= ibase;
		result++;
	}
	return (result);
}
