/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_printf_flagcontainer.h                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 12:07:09 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 15:29:57 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_PRINTF_FLAGCONTAINER_H
# define LIBFT_PRINTF_FLAGCONTAINER_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft_printf.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	START DEFINES
*/
typedef struct	s_printable
{
	char	type;
	t_bool	minus;
	int		minus_value;
	t_bool	star;
	int		star_value;
	t_bool	dot;
	int		dot_value;
	t_bool	zero;
	int		zero_value;
}				t_printable;
/*
**	END DEFINES
*/

#endif
