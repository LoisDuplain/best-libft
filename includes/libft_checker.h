/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_checker.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 11:12:18 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/11 16:31:30 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CHECKER_H
# define LIBFT_CHECKER_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Check if character c is space.
**	./checker/is_space.c
*/
t_bool	is_space(char c);

/*
**	Check if character c is whitespace.
**	./checker/is_whitespace.c
*/
t_bool	is_whitespace(char c);

/*
**	Check if character c is lowercase.
**	./checker/is_lowercase.c
*/
t_bool	is_lowercase(char c);

/*
**	Check if character c is uppercase.
**	./checker/is_uppercase.c
*/
t_bool	is_uppercase(char c);

/*
**	Check if character c is alpha.
**	./checker/is_alpha.c
*/
t_bool	is_alpha(char c);

/*
**	Check if character c is numeric.
**	./checker/is_numeric.c
*/
t_bool	is_numeric(char c);

/*
**	Check if string str is a number string.
**	./checker/is_numberstr.c
*/
t_bool	is_numberstr(char *str);

/*
**	Check if character c is alphanumeric.
**	./checker/is_alphanumeric.c
*/
t_bool	is_alphanumeric(char c);

/*
**	Check if character c is printable.
**	./checker/is_alphanumeric.c
*/
t_bool	is_printable(char c);

/*
**	Check if character c is printable.
**	./checker/is_ascii.c
*/
t_bool	is_ascii(int c);

#endif
