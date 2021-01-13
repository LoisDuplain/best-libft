/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf_parser.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 11:25:19 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 15:30:06 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_PARSER_H
# define LIBFT_PRINTF_PARSER_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft_printf.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Parse dot flag.
**	./dot_parser.c
*/
int	dot_parser(
	const char *format,
	int index,
	va_list args,
	t_printable *printable);

/*
**	Parse star flag.
**	./star_parser.c
*/
int	star_parser(
	const char *format,
	int index,
	va_list args,
	t_printable *printable);

/*
**	Parse minus flag.
**	./minus_parser.c
*/
int	minus_parser(
	const char *format,
	size_t index,
	va_list args,
	t_printable *printable);

/*
**	Parse zero flag.
**	./zero_parser.c
*/
int	zero_parser(
	const char *format,
	size_t index,
	va_list args,
	t_printable *printable);

#endif
