/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_dot_parser.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 12:47:26 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/09 13:51:07 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	dot_parser(			\
	const char *format,	\
	int index,			\
	va_list args,		\
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
