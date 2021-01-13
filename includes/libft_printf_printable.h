/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf_printable.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:50:45 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 15:30:13 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_PRINTABLE_H
# define LIBFT_PRINTF_PRINTABLE_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft_printf.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Create new printable structure filled with zeros and false booleans.
**	./create_printable.c
*/
t_printable	create_printable(
	void);

/*
**	Fill printable structure prtbl with valid params contained in string format.
**	./parse_printable.c
*/
size_t		parse_printable(
	const char *format,
	size_t i,
	t_printable *prtbl,
	va_list args);

#endif
