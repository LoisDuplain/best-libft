/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_math_vector.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/13 15:08:33 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/12 12:39:47 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MATH_VECTOR_H
# define LIBFT_MATH_VECTOR_H

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
typedef struct s_vector3
{
	float	vx;
	float	vy;
	float	vz;
}	t_vector3;
/*
**	END DEFINES
*/

/*
**	Create a new vector.
**	./math/vector/create_vector.c
*/
t_vector3		create_vector(float vx,		\
								float vy,	\
								float vz);

/*
**	Add different axis values to vector vector.
**	./math/vector/add_vector_coord.c
*/
t_vector3		add_vector_coord(t_vector3 vector,	\
								float vx,			\
								float vy,			\
								float vz);

/*
**	Add vector to_add to vector vector.
**	./math/vector/add_vector_vector.c
*/
t_vector3		add_vector_vector(t_vector3 vector,	\
								t_vector3 to_add);

/*
**	Subtract different axis values to vector vector.
**	./math/vector/sub_vector_coord.c
*/
t_vector3		sub_vector_coord(t_vector3 vector,	\
								float vx,			\
								float vy,			\
								float vz);

/*
**	Subtract vector to_sub to vector vector.
**	./math/vector/sub_vector_vector.c
*/
t_vector3		sub_vector_vector(t_vector3 vector,	\
								t_vector3 to_sub);

/*
**	Multiply different axis values to vector vector.
**	./math/vector/mult_vector_coord.c
*/
t_vector3		mult_vector_coord(t_vector3 vector,	\
								float multx,		\
								float multy,		\
								float multz);

/*
**	Multiply all vector axis by value to_mult.
**	./math/vector/mult_vector_value.c
*/
t_vector3		mult_vector_value(t_vector3 vector,	\
								float to_mult);

/*
**	Multiply vector to_mult to vector vector.
**	./math/vector/mult_vector_vector.c
*/
t_vector3		mult_vector_vector(t_vector3 vector,	\
								t_vector3 to_mult);

/*
**	Divide different axis values to vector vector.
**	./math/vector/div_vector_coord.c
*/
t_vector3		div_vector_coord(t_vector3 vector,	\
								float divx,			\
								float divy,			\
								float divz);

/*
**	Divide all vector axis by value to_div.
**	./math/vector/div_vector_value.c
*/
t_vector3		div_vector_value(t_vector3 vector,	\
								float to_div);

/*
**	Divide vector to_div to vector vector.
**	./math/vector/div_vector_vector.c
*/
t_vector3		div_vector_vector(t_vector3 vector,	\
								t_vector3 to_div);

/*
**	Rotate vector on x axis.
**	Angle in radians.
**	./math/vector/rotate_vector_x.c
*/
t_vector3		rotate_vector_x(t_vector3 vector,	\
								double angle);

/*
**	Rotate vector on y axis.
**	Angle in radians.
**	./math/vector/rotate_vector_y.c
*/
t_vector3		rotate_vector_y(t_vector3 vector,	\
								double angle);

/*
**	Rotate vector on z axis.
**	Angle in radians.
**	./math/vector/rotate_vector_z.c
*/
t_vector3		rotate_vector_z(t_vector3 vector,	\
								double angle);

/*
**	Rotate vector on x, y ans z axis.
**	Angle in radians.
**	./math/vector/rotate_vector.c
*/
t_vector3		rotate_vector(t_vector3 vector,	\
								double xangle,	\
								double yangle,	\
								double zangle);

/*
**	Simplify vector to a length equals to 1.
**	./math/vector/normalize_vector.c
*/
t_vector3		normalize_vector(t_vector3 vector);

#endif
