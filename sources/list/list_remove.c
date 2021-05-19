/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 17:51:23 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/19 18:05:00 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	list_remove(t_list **begin_list, void (*free_fct)(void *), int index)
{
	int		l_size;
	t_list	*current_elem;
	int		previous_index;

	l_size = list_size(*begin_list);
	if (l_size <= 0 || index >= l_size)
		return ;
	current_elem = list_get(*begin_list, index);
	previous_index = index - 1;
	if (previous_index == -1)
		*begin_list = current_elem->next;
	else
		list_get(*begin_list, previous_index)->next = current_elem->next;
	free_fct(current_elem->data);
	free(current_elem);
}
