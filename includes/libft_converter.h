/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_converter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:16:50 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/16 10:48:05 by lduplain         ###   ########lyon.fr   */
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
**	Convert unsigned long long number to mallocated string in base ibase.
**	ibase(10) = "0123456789"
**	ibase(16) = "0123456789ABCDEF"
**	./converter/ft_ulltoa_ibase.c
*/
char	*ft_ulltoa_ibase(unsigned long long number, int base);

/*
**	Convert long long number to mallocated string in base ibase.
**	ibase(10) = "0123456789"
**	ibase(16) = "0123456789ABCDEF"
**	./converter/ft_lltoa_ibase.c
*/
char	*ft_lltoa_ibase(long long number, int base);

#endif
