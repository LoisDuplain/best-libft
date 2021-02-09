/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_converter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:16:50 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/09 14:14:30 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_CONVERTER_H
# define LIBFT_CONVERTER_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Convert string to int.
**	./converter/ft_atoi.c
*/
int		ft_atoi(char *str);

/*
**	Convert string to int on n characters.
**	./converter/ft_natoi.c
*/
int		ft_natoi(char *str, size_t n);

/*
**	Convert unsigned long long number to mallocated string in ibase ibase.
**	ibase(10) = "0123456789"
**	ibase(16) = "0123456789ABCDEF"
**	./converter/ft_ulltoa_ibase.c
*/
char	*ft_ulltoa_ibase(		\
	unsigned long long number,	\
	int ibase,					\
	t_bool uppercase);

/*
**	Convert long long number to mallocated string in ibase ibase.
**	ibase(10) = "0123456789"
**	ibase(16) = "0123456789ABCDEF"
**	./converter/ft_lltoa_ibase.c
*/
char	*ft_lltoa_ibase(	\
	long long number,		\
	int ibase,				\
	t_bool uppercase);

/*
**	Get uppercased char from char c.
**	c('a') = 'A'
**	c('A') = 'A'
**	c('1') = '1'
**	./converter/ft_uppercase_char.c
*/
char	ft_uppercase_char(char c);

/*
**	Get lowercased char from char c.
**	c('a') = 'a'
**	c('A') = 'a'
**	c('1') = '1'
**	./converter/ft_lowercase_char.c
*/
char	ft_lowercase_char(char c);

#endif
