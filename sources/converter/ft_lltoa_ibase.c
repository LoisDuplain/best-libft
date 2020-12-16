/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_ibase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 10:40:15 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/16 11:29:22 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoa_ibase(long long number, int base, t_bool uppercase)
{
	char	*result;

	if (number > 0)
		return (ft_ulltoa_ibase((unsigned long long)number, base, uppercase));
	result = ft_append_strs(
				"-",
				ft_ulltoa_ibase(
					(unsigned long long)-number,
					base,
					uppercase)
				,
				FALSE,
				TRUE);
	return (result);
}
