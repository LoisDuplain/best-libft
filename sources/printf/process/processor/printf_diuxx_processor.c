/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_diuxx_processor.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 14:12:58 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/27 15:09:31 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	diuxx_processor(	\
	t_printable *prtbl,		\
	va_list args,			\
	char **to_print)
{
	long	value;

	if (prtbl->type == 'd' || prtbl->type == 'i')
		value = va_arg(args, int);
	else
		value = va_arg(args, unsigned int);
	if (convert_zeros_and_check_precision(prtbl, to_print, value))
		return ;
	if (prtbl->type == 'd' || prtbl->type == 'i')
		*to_print = ft_ulltoa_ibase(ft_iabsui(value), 10, FALSE);
	if (prtbl->type == 'u')
		*to_print = ft_ulltoa_ibase(value, 10, FALSE);
	if (prtbl->type == 'x')
		*to_print = ft_ulltoa_ibase(value, 16, FALSE);
	if (prtbl->type == 'X')
		*to_print = ft_ulltoa_ibase(value, 16, TRUE);
	fill_zeros(prtbl, to_print, value);
	if (value < 0)
		*to_print = ft_strmult_front("-", *to_print, 1, TRUE);
}

t_bool	convert_zeros_and_check_precision(	\
	t_printable *prtbl,						\
	char **to_print,						\
	long value)
{
	if (prtbl->zero && prtbl->zero_value > 0)
	{
		prtbl->star = TRUE;
		prtbl->star_value = prtbl->zero_value;
	}
	if (prtbl->zero && prtbl->zero_value < 0)
	{
		prtbl->minus = TRUE;
		prtbl->minus_value = -prtbl->zero_value;
	}
	if (prtbl->dot && prtbl->dot_value == 0 && value == 0)
	{
		*to_print = ft_strdup("", FALSE);
		return (TRUE);
	}
	return (FALSE);
}

void	fill_zeros(		\
	t_printable *prtbl,	\
	char **to_print,	\
	long value)
{
	int		zeros;

	if (value < 0)
		zeros = prtbl->zero_value - ft_strlen(*to_print) - 1;
	else
		zeros = prtbl->zero_value - ft_strlen(*to_print);
	if (!prtbl->dot && prtbl->zero && zeros > 0)
		*to_print = ft_strmult_front("0", *to_print, zeros, TRUE);
	if (prtbl->dot && prtbl->dot_value < 0 && prtbl->zero && zeros > 0)
		*to_print = ft_strmult_front("0", *to_print, zeros, TRUE);
	zeros = prtbl->dot_value - ft_strlen(*to_print);
	if (prtbl->dot && zeros > 0)
		*to_print = ft_strmult_front("0", *to_print, zeros, TRUE);
}
