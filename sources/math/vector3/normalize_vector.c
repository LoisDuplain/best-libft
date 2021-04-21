/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_vector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 15:05:24 by lduplain          #+#    #+#             */
/*   Updated: 2021/04/21 15:07:00 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	normalize_vector(t_vector3 vector)
{
	float	norm;

	norm = distance3(vector.vx, vector.vy, vector.vz);
	vector.vx /= norm;
	vector.vy /= norm;
	vector.vz /= norm;
	return (vector);
}
