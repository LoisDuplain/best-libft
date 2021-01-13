/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/08 11:14:12 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 15:32:49 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_printf(
	const char *format,
	...)
{
	va_list		args;
	size_t		char_count;

	va_start(args, format);
	char_count = preprocess(format, args);
	va_end(args);
	return (char_count);
}
