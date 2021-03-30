/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_splitted.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:56:49 by lduplain          #+#    #+#             */
/*   Updated: 2021/03/30 09:17:00 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_destroy_splitted(char ***splitted)
{
	int		word_index;

	if (*splitted != NULL)
	{
		word_index = 0;
		while ((*splitted)[word_index])
		{
			free((*splitted)[word_index]);
			(*splitted)[word_index] = NULL;
			word_index++;
		}
		free(*splitted);
		*splitted = NULL;
	}
	return (NULL);
}
