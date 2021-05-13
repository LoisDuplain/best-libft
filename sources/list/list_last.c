/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_last.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 14:07:28 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/13 14:10:46 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*list_last(t_list *begin_list)
{
	t_list	*current;

	current = begin_list;
	if (current)
	{
		while (current->next)
			current = current->next;
		return (current);
	}
	return (NULL);
}
