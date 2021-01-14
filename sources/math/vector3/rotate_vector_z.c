/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_vector_z.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:21:32 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 18:23:11 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	rotate_vector_z(t_vector3 vector, double angle)
{
	float	vx;
	float	vy;

	vx = cos(angle) * vector.vx - sin(angle) * vector.vz;
	vy = sin(angle) * vector.vx + cos(angle) * vector.vz;
	return (create_vector(vx, vy, vector.vz));
}
