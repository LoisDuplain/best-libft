/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf_checker.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/10 16:50:35 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 15:29:51 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_CHECKER_H
# define LIBFT_PRINTF_CHECKER_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft_printf.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Check if char c is a valid type usable by ft_printf.
**	./checker/is_valid_type.c
*/
t_bool	is_valid_type(char c);

/*
**	Check if char c is a valid flag usable by ft_printf.
**	./checker/is_valid_flag.c
*/
t_bool	is_valid_flag(char c);

#endif
