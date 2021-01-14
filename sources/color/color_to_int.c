/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color_to_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:28:45 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 12:00:14 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		color_to_int(t_color color)
{
	return ((255 - color.a) << 24 | color.r << 16 | color.g << 8 | color.b);
}
