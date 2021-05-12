/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_add_front_elem.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 12:45:35 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/12 12:47:22 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	list_add_front_elem(t_list **begin_list, t_list *elem)
{
	if (elem == NULL)
		return ;
	if (*begin_list)
		elem->next = *begin_list;
	*begin_list = elem;
}
