/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   s_processor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 18:47:07 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/13 15:33:03 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	s_processor(
	t_printable *prtbl,
	va_list args,
	char **to_print)
{
	char	*value;
	int		to_dup;

	value = va_arg(args, char*);
	if (value == NULL)
		*to_print = ft_strdup("(null)");
	else
		*to_print = ft_strdup(value);
	if (prtbl->dot)
	{
		to_dup = ft_min(prtbl->dot_value, ft_strlen(*to_print));
		*to_print = ft_strndup(*to_print, to_dup);
	}
}
