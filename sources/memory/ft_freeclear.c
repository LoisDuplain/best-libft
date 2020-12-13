/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freeclear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/13 16:56:33 by lduplain          #+#    #+#             */
/*   Updated: 2020/12/13 16:58:53 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bool	ft_freeclear(void *variable)
{
	if (!variable)
		return (FALSE);
	free(variable);
	variable = 0;
	return (TRUE);
}
