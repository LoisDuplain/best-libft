/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 14:24:51 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/12 14:25:00 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	list_size(t_list *begin_list)
{
	t_list	*current;
	int		i;

	current = begin_list;
	i = 0;
	while (current)
	{
		i++;
		current = current->next;
	}
	return (i);
}
