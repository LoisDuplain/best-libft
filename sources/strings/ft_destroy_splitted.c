/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy_splitted.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:56:49 by lduplain          #+#    #+#             */
/*   Updated: 2021/03/30 09:13:38 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_destroy_splitted(char ***splitted)
{
	int		word_index;

	puts("ft_destroy_splitted - a");
	if (*splitted != NULL)
	{
		puts("ft_destroy_splitted - b");
		word_index = 0;
		puts("ft_destroy_splitted - c");
		while (*splitted[word_index])
		{
			puts("ft_destroy_splitted - d");
			free(*splitted[word_index]);
			puts("ft_destroy_splitted - e");
			*splitted[word_index] = NULL;
			puts("ft_destroy_splitted - f");
			word_index++;
			puts("ft_destroy_splitted - g");
		}
		puts("ft_destroy_splitted - h");
		free(*splitted);
		puts("ft_destroy_splitted - i");
		*splitted = NULL;
		puts("ft_destroy_splitted - j");
	}
	puts("ft_destroy_splitted - k");
	return (NULL);
}
