/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vector_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 16:03:30 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 17:45:40 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	add_vector_vector(t_vector3 vector, t_vector3 to_add)
{
	return (add_vector_coord(vector, to_add.vx, to_add.vy, to_add.vz));
}
