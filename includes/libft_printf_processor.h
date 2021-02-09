/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf_processor.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 12:46:25 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/09 14:19:38 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_PROCESSOR_H
# define LIBFT_PRINTF_PROCESSOR_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Preprocess string.
**	./printf/process/printf_printf_preprocess.c
*/
size_t	preprocess(		\
	const char *format,	\
	va_list args);

/*
**	Process t_printable with args.
**	./printf/process/printf_process.c
*/
size_t	process(		\
	t_printable *prtbl,	\
	va_list args);

/*
**	Process c type.
**	./printf/process/processor/printf_c_processor.c
*/
size_t	c_processor(t_printable *printable, va_list args, char **to_print);

/*
**	Process s type.
**	./printf/process/processor/printf_s_processor.c
*/
void	s_processor(t_printable *printable, va_list args, char **to_print);

/*
**	Process p type.
**	./printf/process/processor/printf_p_processor.c
*/
void	p_processor(t_printable *printable, va_list args, char **to_print);

/*
**	Process d, i, u, x, X types.
**	./printf/process/processor/printf_diuxx_processor.c
*/
void	diuxx_processor(t_printable *printable, va_list args, char **to_print);

/*
**	Only used by diuxx processor function.
**	./printf/process/processor/printf_diuxx_processor.c
*/
t_bool	convert_zeros_and_check_precision(	\
	t_printable *prtbl,						\
	char **to_print,						\
	long value);

/*
**	Only used by diuxx processor function.
**	./printf/process/processor/printf_diuxx_processor.c
*/
void	fill_zeros(		\
	t_printable *prtbl,	\
	char **to_print,	\
	long value);

/*
**	Process % type.
**	./printf/process/processor/printf_pcrt_processor.c
*/
void	pcrt_processor(		\
	t_printable *printable,	\
	va_list args,			\
	char **to_print);

/*
**	Display printable.
**	./printf/process/printf_display.c
*/
size_t	display(		\
	t_printable *prtbl,	\
	char **to_print);

#endif
