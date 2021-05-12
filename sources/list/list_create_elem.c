/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_create_elem.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 12:41:33 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/12 12:43:18 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*list_create_elem(void *data)
{
	t_list	*list_elem;

	list_elem = ft_calloc(1, sizeof(t_list));
	if (list_elem == NULL)
		return (NULL);
	list_elem->next = NULL;
	list_elem->data = data;
	return (list_elem);
}
