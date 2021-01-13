/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_processor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 19:05:47 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 15:33:09 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	p_processor(
	t_printable *prtbl,
	va_list args,
	char **to_print)
{
	(void)prtbl;
	*to_print = ft_ulltoa_ibase(va_arg(args, unsigned long long), 16, FALSE);
	*to_print = ft_append_strs("0x", *to_print, FALSE, TRUE);
}
