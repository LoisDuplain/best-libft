/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_display.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:30:22 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/14 14:04:26 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DISPLAY_H
# define LIBFT_DISPLAY_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print character c on file descriptor fd.
**	./display/ft_putchar_fd.c
*/
void	ft_putchar_fd(int fd, char c);

/*
**	Print character c on file descriptor fd followed by a new line.
**	./display/ft_putchar_fdnl.c
*/
void	ft_putchar_fdnl(int fd, char c);

/*
**	Print character c on standard output.
**	./display/ft_putchar.c
*/
void	ft_putchar(char c);

/*
**	Print character c on standard output followed by a new line.
**	./display/ft_putchar_nl.c
*/
void	ft_putchar_nl(char c);

/*
**	Print character c on error output.
**	./display/ft_putchar_err.c
*/
void	ft_putchar_err(char c);

/*
**	Print character c on error output followed by a new line.
**	./display/ft_putchar_errnl.c
*/
void	ft_putchar_errnl(char c);

/*
**	Print string str on file descriptor fd.
**	./display/ft_putstr_fd.c
*/
void	ft_putstr_fd(int fd, char *str);

/*
**	Print string str on file descriptor fd followed by a new line.
**	./display/ft_putstr_fdnl.c
*/
void	ft_putstr_fdnl(int fd, char *str);

/*
**	Print string str on standard output.
**	./display/ft_putstr.c
*/
void	ft_putstr(char *str);

/*
**	Print string str on standard output followed by a new line.
**	./display/ft_putstr_nl.c
*/
void	ft_putstr_nl(char *str);

/*
**	Print string str on error output.
**	./display/ft_putstr_err.c
*/
void	ft_putstr_err(char *str);

/*
**	Print string str on error output followed by a new line.
**	./display/ft_putstr_errnl.c
*/
void	ft_putstr_errnl(char *str);

/*
**	Print positive number on file descriptor fd.
**	./display/ft_putnbr_pos_fd.c
*/
void	ft_putnbr_pos_fd(int fd, unsigned long long number);

/*
**	Print positive number on file descriptor fd followed by a new line.
**	./display/ft_putnbr_pos_fdnl.c
*/
void	ft_putnbr_pos_fdnl(int fd, unsigned long long number);

/*
**	Print positive number on standard output.
**	./display/ft_putnbr_pos.c
*/
void	ft_putnbr_pos(unsigned long long number);

/*
**	Print positive number on standard output followed by a new line.
**	./display/ft_putnbr_pos_nl.c
*/
void	ft_putnbr_pos_nl(unsigned long long number);

/*
**	Print positive number on error output.
**	./display/ft_putnbr_pos_err.c
*/
void	ft_putnbr_pos_err(unsigned long long number);

/*
**	Print positive number on error output followed by a new line.
**	./display/ft_putnbr_pos_errnl.c
*/
void	ft_putnbr_pos_errnl(unsigned long long number);

#endif
