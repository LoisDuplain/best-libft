/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mult_vector_coord.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:53:50 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 17:56:33 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	mult_vector_coord(t_vector3 vector,
								float multx,
								float multy,
								float multz)
{
	return (create_vector(vector.vx * multx,
							vector.vy * multy,
							vector.vz * multz));
}
