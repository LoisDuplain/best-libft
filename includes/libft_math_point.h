/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_math_point.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:29:42 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/12 12:39:55 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATH_POINT_H
# define LIBFT_MATH_POINT_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	START DEFINES
*/
typedef struct s_point3
{
	float	x;
	float	y;
	float	z;
}	t_point3;
/*
**	END DEFINES
*/

/*
**	Create a new point containing three coordinates.
**	./math/point3/create_point3.c
*/
t_point3		create_point3(float x, float y, float z);

#endif
