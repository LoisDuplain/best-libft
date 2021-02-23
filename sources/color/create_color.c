/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_color.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:00:21 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/23 14:14:14 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_color	create_color(unsigned char a, unsigned char r,	\
	unsigned char g, unsigned char b)
{
	t_color	color;

	color.a = a;
	color.r = r;
	color.g = g;
	color.b = b;
	return (color);
}
