/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_converter.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 13:16:50 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/09 17:53:58 by lduplain         ###   ########lyon.fr   */
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

#endif
