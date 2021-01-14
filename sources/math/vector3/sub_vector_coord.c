/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_vector_coord.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:45:02 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 17:47:25 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	sub_vector_coord(t_vector3 vector, float vx, float vy, float vz)
{
	return (create_vector(vector.vx - vx, vector.vy - vy, vector.vz - vz));
}
