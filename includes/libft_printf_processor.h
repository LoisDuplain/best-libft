/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf_processor.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:46:25 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 15:30:51 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_PROCESSOR_H
# define LIBFT_PRINTF_PROCESSOR_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft_printf.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Preprocess string.
**	./preprocess.c
*/
size_t	preprocess(
	const char *format,
	va_list args);

/*
**	Process t_printable with args.
**	./process.c
*/
size_t	process(
	t_printable *prtbl,
	va_list args);

/*
**	Process c type.
**	./c_processor.c
*/
size_t	c_processor(t_printable *printable, va_list args, char **to_print);

/*
**	Process s type.
**	./s_processor.c
*/
void	s_processor(t_printable *printable, va_list args, char **to_print);

/*
**	Process p type.
**	./p_processor.c
*/
void	p_processor(t_printable *printable, va_list args, char **to_print);

/*
**	Process d, i, u, x, X types.
**	./diuxx_processor.c
*/
void	diuxx_processor(t_printable *printable, va_list args, char **to_print);

/*
**	Only used by diuxx processor function.
**	./diuxx_processor.c
*/
t_bool	convert_zeros_and_check_precision(
	t_printable *prtbl,
	char **to_print,
	long value);

/*
**	Only used by diuxx processor function.
**	./diuxx_processor.c
*/
void	fill_zeros(
	t_printable *prtbl,
	char **to_print,
	long value);

/*
**	Process % type.
**	./pcrt_processor.c
*/
void	pcrt_processor(t_printable *printable, va_list args, char **to_print);

/*
**	Display printable.
**	./display.c
*/
size_t	display(
	t_printable *prtbl,
	char **to_print);

#endif
