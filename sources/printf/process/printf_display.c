/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_display.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/11 13:55:56 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/09 13:53:23 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	display(		\
	t_printable *prtbl,	\
	char **to_print)
{
	int		spaces;

	if (prtbl->type == 'c')
		return (0);
	spaces = prtbl->star_value - ft_strlen(*to_print);
	if (prtbl->star && spaces > 0)
		*to_print = ft_strmult_front(" ", *to_print, spaces, TRUE);
	spaces = prtbl->minus_value - ft_strlen(*to_print);
	if (prtbl->minus && spaces > 0)
		*to_print = ft_strmult_back(" ", *to_print, spaces, TRUE);
	return (ft_putstr(*to_print));
}
