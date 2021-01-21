/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:23:34 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 18:24:29 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	rotate_vector(t_vector3 vector,
							double xangle,
							double yangle,
							double zangle)
{
	t_vector3	result;

	result = rotate_vector_x(vector, xangle);
	result = rotate_vector_y(vector, yangle);
	result = rotate_vector_z(vector, zangle);
	return (result);
}