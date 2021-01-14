/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vector_coord.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:02:12 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 16:03:21 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	add_vector_coord(t_vector3 vector, float vx, float vy, float vz)
{
	return (create_vector(vector.vx + vx, vector.vy + vy, vector.vz + vz));
}
