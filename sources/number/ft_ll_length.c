/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ll_length.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 12:24:48 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/16 12:26:03 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ll_length(long long number)
{
	if (number < 0)
		return (ft_ull_length((unsigned long long)-number) + 1);
	return (ft_ull_length((unsigned long long)number));
}
