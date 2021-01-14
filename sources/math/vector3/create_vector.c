/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 15:57:47 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 15:59:18 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	create_vector(float vx, float vy, float vz)
{
	t_vector3	vector;

	vector.vx = vx;
	vector.vy = vy;
	vector.vz = vz;
	return (vector);
}
