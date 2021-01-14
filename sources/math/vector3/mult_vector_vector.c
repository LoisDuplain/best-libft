/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mult_vector_vector.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:58:47 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 18:06:56 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	mult_vector_vector(t_vector3 vector, t_vector3 to_mult)
{
	return (mult_vector_coord(vector, to_mult.vx, to_mult.vy, to_mult.vz));
}
