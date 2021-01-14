/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div_vector_coord.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:07:22 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 18:08:04 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3		div_vector_coord(t_vector3 vector,
								float divx,
								float divy,
								float divz)
{
	return (create_vector(vector.vx / divx,
							vector.vy / divy,
							vector.vz / divz));
}
