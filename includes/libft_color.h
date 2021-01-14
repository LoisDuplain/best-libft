/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_color.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/14 11:25:58 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/14 12:02:32 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_COLOR_H
# define LIBFT_COLOR_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	START DEFINES
*/
typedef struct	s_color
{
	int		a;
	int		r;
	int		g;
	int		b;
}				t_color;
/*
**	END DEFINES
*/

/*
**	Create color from alpha(a), red(r), green(g) and blue(b) int parameters.
**	./color/create_color.c
*/
t_color			create_color(int a, int r, int g, int b);

/*
**	Convert t_color to int. (usable by minilibx)
**	./color/color_to_int.c
*/
int				color_to_int(t_color color);

#endif
