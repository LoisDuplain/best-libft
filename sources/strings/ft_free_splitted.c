/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_splitted_string.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/19 16:37:12 by lduplain          #+#    #+#             */
/*   Updated: 2021/03/19 16:37:14 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_splitted(char **splitted)
{
	int		word_index;

	word_index = 0;
	while (splitted[word_index])
	{
		free(splitted[word_index]);
		word_index++;
	}
	free(splitted);
}
