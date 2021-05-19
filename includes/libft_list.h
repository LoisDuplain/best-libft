/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 12:37:18 by lduplain          #+#    #+#             */
/*   Updated: 2021/05/19 18:06:00 by lduplain         ###   ########lyon.fr   */
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
**	Add new element containing data (void *)data in
**	front of list (t_list **)begin_list.
**	./list/list_add_front_new.c
*/
void	list_add_front_new(t_list **begin_list, void *data);

/*
**	Add element (l_list *)elem in back of list (t_list **)begin_list.
**	./list/list_add_back_elem.c
*/
void	list_add_back_elem(t_list **begin_list, t_list *elem);

/*
**	Add new element containing data (void *)data in
**	back of list (t_list **)begin_list.
**	./list/list_add_back_new.c
*/
void	list_add_back_new(t_list **begin_list, void *data);

/*
**	Get size of list (t_list *)begin_list.
**	./list/list_size.c
*/
int		list_size(t_list *begin_list);

/*
**	Get last element of list (t_list *)begin_list.
**	./list/list_last.c
*/
t_list	*list_last(t_list *begin_list);

/*
**	Clear list starting by (t_list *)begin_list.
**	./list/list_clear.c
*/
void	list_clear(t_list *begin_list, void (*free_fct)(void *));

/*
**	Get element at index (int)index in list starting by (t_list *)begin_list.
**	./list/list_get.c
*/
t_list	*list_get(t_list *begin_list, int index);

/*
**	Remove in list (t_list **)begin_list element at index (int)index.
**	./list/list_remove.c
*/
void	list_remove(t_list **begin_list, void (*free_fct)(void *), int index);

#endif