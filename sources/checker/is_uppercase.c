/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_uppercase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faherrau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 14:41:26 by lduplain          #+#    #+#             */
/*   Updated: 2021/02/08 10:46:10 by faherrau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	is_uppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (TRUE);
	return (FALSE);
}
