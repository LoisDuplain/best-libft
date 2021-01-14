/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_vector_x.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:11:58 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 18:26:20 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	rotate_vector_x(t_vector3 vector, double angle)
{
	float	vy;
	float	vz;

	vy = cos(angle) * vector.vy - sin(angle) * vector.vz;
	vz = sin(angle) * vector.vy + cos(angle) * vector.vz;
	return (create_vector(vector.vx, vy, vz));
}
