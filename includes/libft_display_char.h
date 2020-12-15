/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_display_char.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:25:17 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/15 16:10:28 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DISPLAY_CHAR_H
# define LIBFT_DISPLAY_CHAR_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print character c on file descriptor fd.
**	./display/char/ft_putchar_fd.c
*/
void	ft_putchar_fd(int fd, char c);

/*
**	Print character c on file descriptor fd followed by a new line.
**	./display/char/ft_putchar_fdnl.c
*/
void	ft_putchar_fdnl(int fd, char c);

/*
**	Print character c on standard output.
**	./display/char/ft_putchar.c
*/
void	ft_putchar(char c);

/*
**	Print character c on standard output followed by a new line.
**	./display/char/ft_putchar_nl.c
*/
void	ft_putchar_nl(char c);

/*
**	Print character c on error output.
**	./display/char/ft_putchar_err.c
*/
void	ft_putchar_err(char c);

/*
**	Print character c on error output followed by a new line.
**	./display/char/ft_putchar_errnl.c
*/
void	ft_putchar_errnl(char c);

/*
**	Print n c characters on file descriptor fd.
**	./display/char/ft_putnchar_fd.c
*/
void	ft_putnchar_fd(int fd, char c, size_t n);

/*
**	Print n c characters on standard output.
**	./display/char/ft_putnchar.c
*/
void	ft_putnchar(char c, size_t n);

#endif
