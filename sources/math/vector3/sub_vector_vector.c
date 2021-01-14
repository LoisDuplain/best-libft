/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_vector_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:51:16 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 18:26:57 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	sub_vector_vector(t_vector3 vector, t_vector3 to_sub)
{
	return (sub_vector_coord(vector, to_sub.vx, to_sub.vx, to_sub.vx));
}
