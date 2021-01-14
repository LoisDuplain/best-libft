/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_math.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 14:47:02 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 18:46:31 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATH_H
# define LIBFT_MATH_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"
# include "libft_math_vector.h"
# include "libft_math_point.h"
# include "libft_math_pythagore.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	START DEFINES
*/
typedef struct	s_interval
{
	float	istart;
	float	istop;
}				t_interval;
/*
**	END DEFINES
*/

/*
**	Get the minimum value between int a and int b.
**	./math/ft_min.c
*/
t_interval		create_interval(float istart, float istop);

/*
**	Get the minimum value between int a and int b.
**	./math/ft_min.c
*/
int				ft_min(int a, int b);

/*
**	Get the maximum value between int a and int b.
**	./math/ft_max.c
*/
int				ft_max(int a, int b);

/*
**	Get the absolute value of int a.
**	./math/ft_abs.c
*/
int				ft_abs(int a);

/*
**	Get the absolute value of int a converted to unsigned int.
**	./math/ft_iabsui.c
*/
unsigned int	ft_iabsui(int a);

/*
**	Map a value contained in interval iinput to interval ioutput.
**	./math/ft_map.c
*/
float			ft_map(float value, t_interval iinput, t_interval ioutput);

#endif
