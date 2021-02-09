/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 12:42:06 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/09 13:18:58 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float	ft_map(float value, t_interval iinput, t_interval ioutput)
{
	return (ioutput.istart + (ioutput.istop - ioutput.istart)
		* ((value - iinput.istart) / (iinput.istop - iinput.istart)));
}
