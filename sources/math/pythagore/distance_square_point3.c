/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   distance_square_point3.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:47:23 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/09 13:21:47 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	distance_square_point3(t_point3 point_a, t_point3 point_b)
{
	return (distance_square3(point_b.x - point_a.x, point_b.y - point_a.y,
			point_b.z - point_a.z));
}
