/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_math.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:47:02 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/21 16:11:39 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATH_H
# define LIBFT_MATH_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Get the minimum value between int a and int b.
**	./math/ft_min.c
*/
int		ft_min(int a, int b);

/*
**	Get the absolute value of int a.
**	./math/ft_abs.c
*/
int		ft_abs(int a);

/*
**	Get the absolute value of int a converted to unsigned int.
**	./math/ft_iabsui.c
*/
unsigned int	ft_iabsui(int a);

#endif
