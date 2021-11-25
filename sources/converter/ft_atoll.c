/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:04:20 by lduplain          #+#    #+#             */
/*   Updated: 2021/11/25 13:39:04 by lduplain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long	ft_atoll(char *str)
{
	unsigned long long	result;
	size_t				i;
	int					sign;

	i = 0;
	result = 0;
	sign = 1;
	while (str[i] && is_whitespace(str[i]))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if ((sign == 1 && result > (unsigned long long)(LLONG_MAX))
		|| (sign == -1 && result > (unsigned long long)(LLONG_MAX) + 1))
		errno = ERANGE;
	return ((long long)result * sign);
}
