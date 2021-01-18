/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_memory.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/09 15:59:37 by lduplain          #+#    #+#             */
/*   Updated: 2021/01/18 17:16:50 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_MEMORY_H
# define LIBFT_MEMORY_H

/*
**	START CUSTOM INCLUDES
*/

# include "libft.h"

/*
**	END CUSTOM INCLUDES
*/

/*
**	Set n bytes of target to char_to_set.
**	./memory/ft_memset.c
**	Return:
**	(void *)target.
**	The (void *)target (argument modified).
*/
void	*ft_memset(void *target, int char_to_set, size_t n);

/*
**	Set n bytes of s to 0.=
**	./memory/ft_bzero.c
*/
void	ft_bzero(void *s, size_t n);

/*
**	Malloc quantiy of type_size bytes.
**	./memory/ft_calloc.c
**	Return:
**	quantity mallocated of type_size bytes.
*/
void	*ft_calloc(size_t quantity, size_t type_size);

#endif
