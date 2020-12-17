/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_display_str.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 14:23:47 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/17 13:37:25 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DISPLAY_STR_H
# define LIBFT_DISPLAY_STR_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print string str on file descriptor fd.
**	./display/str/ft_putstr_fd.c
*/
size_t	ft_putstr_fd(int fd, char *str);

/*
**	Print string str on file descriptor fd followed by a new line.
**	./display/str/ft_putstr_fdnl.c
*/
size_t	ft_putstr_fdnl(int fd, char *str);

/*
**	Print string str on standard output.
**	./display/str/ft_putstr.c
*/
size_t	ft_putstr(char *str);

/*
**	Print string str on standard output followed by a new line.
**	./display/str/ft_putstr_nl.c
*/
size_t	ft_putstr_nl(char *str);

/*
**	Print string str on error output.
**	./display/str/ft_putstr_err.c
*/
size_t	ft_putstr_err(char *str);

/*
**	Print string str on error output followed by a new line.
**	./display/str/ft_putstr_errnl.c
*/
size_t	ft_putstr_errnl(char *str);

#endif
