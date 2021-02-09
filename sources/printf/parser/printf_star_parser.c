/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_star_parser.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:26:36 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/09 13:51:34 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	star_parser(		\
	const char *format,	\
	int index,			\
	va_list args,		\
	t_printable *prtbl)
{
	prtbl->star = TRUE;
	if (is_numeric(format[index]))
	{
		prtbl->star_value = 0;
		while (is_numeric(format[index]))
			prtbl->star_value = prtbl->star_value * 10 + format[index++] - 48;
	}
	else if (format[index] == '*')
	{
		prtbl->star_value = va_arg(args, int);
		index++;
	}
	if (prtbl->star_value < 0)
	{
		prtbl->minus = TRUE;
		prtbl->minus_value = -prtbl->star_value;
		prtbl->star = FALSE;
		prtbl->star_value = 0;
	}
	return (index);
}
