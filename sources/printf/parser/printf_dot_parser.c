/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot_parser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 12:47:26 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 15:33:26 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	dot_parser(
	const char *format,
	int index,
	va_list args,
	t_printable *prtbl)
{
	prtbl->dot = TRUE;
	index++;
	if (is_numeric(format[index]))
	{
		prtbl->dot_value = 0;
		while (is_numeric(format[index]))
			prtbl->dot_value = prtbl->dot_value * 10 + format[index++] - 48;
	}
	else if (format[index] == '*')
	{
		prtbl->dot_value = va_arg(args, int);
		index++;
	}
	else
	{
		prtbl->dot_value = 0;
	}
	return (index);
}
