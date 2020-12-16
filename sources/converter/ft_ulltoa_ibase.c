/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_ibase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 10:41:12 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/16 12:27:28 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_result(
	unsigned long long number,
	int base,
	char *result,
	int length)
{
	while (number != 0)
	{
		if ((number % base) < 10)
			result[length - 1] = (number % base) + 48;
		else
			result[length - 1] = (number % base) + 87;
		number /= base;
		length--;
	}
	return (result);
}

char		*ft_ulltoa_ibase(
	unsigned long long number,
	int base,
	t_bool uppercase)
{
	char				*result;
	int					length;

	result = 0;
	length = 0;
	if (number == 0)
		return (ft_strdup("0"));
	length = ft_ull_length(number);
	if (!(result = malloc(sizeof(char) * (length + 1))))
		return (0);
	result[length] = '\0';
	result = fill_result(number, base, result, length);
	if (uppercase)
		result = ft_toupper(result);
	return (result);
}
