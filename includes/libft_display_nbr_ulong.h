/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_display_nbr_ulong.h                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 15:39:10 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/14 16:02:46 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_DISPLAY_NBR_ULONG_H
# define LIBFT_DISPLAY_NBR_ULONG_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Print unsigned long on file descriptor fd.
**	./display/nbr/ulong/ft_putul_fd.c
*/
void	ft_putul_fd(int fd, unsigned long number);

/*
**	Print unsigned long on file descriptor fd followed by a new line.
**	./display/nbr/ulong/ft_putul_fdnl.c
*/
void	ft_putul_fdnl(int fd, unsigned long number);

/*
**	Print unsigned long on standard output.
**	./display/nbr/ulong/ft_putul.c
*/
void	ft_putul(unsigned long number);

/*
**	Print unsigned long on standard output followed by a new line.
**	./display/nbr/ulong/ft_putul_nl.c
*/
void	ft_putul_nl(unsigned long number);

/*
**	Print unsigned long on error output.
**	./display/nbr/ulong/ft_putul_err.c
*/
void	ft_putul_err(unsigned long number);

/*
**	Print unsigned long on error output followed by a new line.
**	./display/nbr/ulong/ft_putul_err.c
*/
void	ft_putul_errnl(unsigned long number);

#endif
