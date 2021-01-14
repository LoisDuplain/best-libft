/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div_vector_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 18:09:45 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 18:11:23 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	div_vector_vector(t_vector3 vector, t_vector3 to_div)
{
	return (div_vector_coord(vector, to_div.vx, to_div.vy, to_div.vz));
}
