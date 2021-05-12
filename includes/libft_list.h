/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 12:37:18 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/12 17:13:59 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LIST_H
# define LIBFT_LIST_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	START DEFINES
*/
typedef struct s_list
{
	void			*data;
	struct s_list	*next;
}	t_list;
/*
**	END DEFINES
*/

/*
**	Create new list element with data (void *)data.
**	./list/list_create_elem.c
*/
t_list	*list_create_elem(void *data);

/*
**	Add element (l_list *)elem in front of list (t_list **)begin_list.
**	./list/list_add_front_elem.c
*/
void	list_add_front_elem(t_list **begin_list, t_list *elem);

/*
**	Add element (l_list *)elem in front of list (t_list **)begin_list.
**	./list/list_add_front_elem.c
*/
void	list_add_front_new(t_list **begin_list, void *data);

/*
**	Get size of list (t_list *)begin_list.
**	./list/list_size.c
*/
int		list_size(t_list *begin_list);

#endif