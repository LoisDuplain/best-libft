/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_display_nbr_uint.h                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 15:42:27 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/14 16:12:22 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DISPLAY_NBR_UINT_H
# define LIBFT_DISPLAY_NBR_UINT_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print unsigned int on file descriptor fd.
**	./display/nbr/uint/ft_putui_fd.c
*/
void	ft_putui_fd(int fd, unsigned int number);

/*
**	Print unsigned int on file descriptor fd followed by a new line.
**	./display/nbr/uint/ft_putui_fdnl.c
*/
void	ft_putui_fdnl(int fd, unsigned int number);

/*
**	Print unsigned int on standard output.
**	./display/nbr/uint/ft_putui.c
*/
void	ft_putui(unsigned int number);

/*
**	Print unsigned int on standard output followed by a new line.
**	./display/nbr/uint/ft_putui_nl.c
*/
void	ft_putui_nl(unsigned int number);

/*
**	Print unsigned int on error output.
**	./display/nbr/uint/ft_putui_err.c
*/
void	ft_putui_err(unsigned int number);

/*
**	Print unsigned int on error output followed by a new line.
**	./display/nbr/uint/ft_putui_errnl.c
*/
void	ft_putui_errnl(unsigned int number);

#endif
