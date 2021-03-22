/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_file_content.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:55:13 by lduplain          #+#    #+#             */
/*   Updated: 2021/03/22 19:59:01 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_create_file_content(char *path)
{
	ssize_t	file_lines_count;
	char	**file_content;
	size_t	line_index;

	puts("ft_create_file_content - a");
	file_lines_count = ft_count_file_lines(path);
	puts("ft_create_file_content - b");
	if (file_lines_count == -1)
		return (NULL);
	puts("ft_create_file_content - c");
	file_content = ft_calloc((size_t)file_lines_count, sizeof(char *));
	puts("ft_create_file_content - d");
	if (file_content == NULL)
		return (NULL);
	puts("ft_create_file_content - e");
	line_index = 0;
	puts("ft_create_file_content - g");
	while (line_index < (size_t)file_lines_count)
	{
		puts("ft_create_file_content - h");
		file_content[line_index] = NULL;
		puts("ft_create_file_content - i");
		line_index++;
	}
	puts("ft_create_file_content - j");
	return (file_content);
}
