/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lltoa_ibase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 10:40:15 by lduplain          #+#    #+#             */
/*   Updated: 2021/10/26 16:19:35 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_lltoa_ibase(long long number, int base, t_bool uppercase)
{
	char	*result;

	result = ft_ulltoa_ibase((unsigned long long)number, base, uppercase);
	if (number >= 0)
		return (result);
	return (ft_append_strs("-", result, FALSE, TRUE));
}
