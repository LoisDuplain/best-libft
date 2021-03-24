/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_file_content.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:55:13 by lduplain          #+#    #+#             */
/*   Updated: 2021/03/24 12:41:22 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_create_file_content(char *path)
{
	ssize_t	file_lines_count;
	char	**file_content;
	size_t	line_index;

	file_lines_count = ft_count_file_lines(path);
	if (file_lines_count == -1)
		return (NULL);
	file_content = ft_calloc((size_t)file_lines_count + 1, sizeof(char *));
	if (file_content == NULL)
		return (NULL);
	line_index = 0;
	while (line_index < (size_t)file_lines_count)
	{
		file_content[line_index] = NULL;
		line_index++;
	}
	file_content[line_index] = NULL;
	return (file_content);
}
