/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mult_vector_value.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 17:57:39 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 17:58:27 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector3	mult_vector_value(t_vector3 vector, float to_mult)
{
	return (mult_vector_coord(vector, to_mult, to_mult, to_mult));
}
