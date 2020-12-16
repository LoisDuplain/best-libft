/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_ibase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 10:41:12 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/16 10:41:19 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*fill_result(
	unsigned long long number_backup,
	int base,
	char *result,
	int length)
{
	while (number_backup != 0)
	{
		if ((number_backup % base) < 10)
			result[length - 1] = (number_backup % base) + 48;
		else
			result[length - 1] = (number_backup % base) + 55;
		number_backup /= base;
		length--;
	}
	return (result);
}

char		*ft_ulltoa_ibase(
	unsigned long long number,
	int base)
{
	unsigned long long	number_backup;
	char				*result;
	int					length;

	result = 0;
	length = 0;
	number_backup = number;
	if (number == 0)
		return (ft_strdup("0"));
	while (number != 0)
	{
		number /= base;
		length++;
	}
	if (!(result = malloc(sizeof(char) * (length + 1))))
		return (0);
	result[length] = '\0';
	return (fill_result(number_backup, base, result, length));
}
