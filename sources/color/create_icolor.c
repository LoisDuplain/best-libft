/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_icolor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:52:28 by lduplain          #+#    #+#             */
/*   Updated: 2021/04/06 13:56:01 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_color	create_icolor(int a, int r, int g, int b)
{
	return (create_color((unsigned char)a, (unsigned char)r,
			(unsigned char)g, (unsigned char)b));
}
