/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_endwith.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 16:44:40 by lduplain          #+#    #+#             */
/*   Updated: 2021/03/24 17:40:09 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_str_endwith(char *str, char *end_with)
{
	size_t	str_len;
	size_t	end_with_len;
	size_t	score;

	if (str == NULL || end_with == NULL)
		return (FALSE);
	str_len = ft_strlen(str);
	end_with_len = ft_strlen(end_with);
	if (end_with_len > str_len || end_with_len == 0)
		return (FALSE);
	score = 0;
	while (score != end_with_len)
	{
		if (end_with[end_with_len - score - 1] != str[str_len - score - 1])
			return (FALSE);
		score++;
	}
	return (TRUE);
}
