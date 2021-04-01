/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_file_content.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:23:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/04/01 11:19:50 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_fill_file_content(char **file_content, t_file *file)
{
	size_t	line_index;
	char	*duplicated_line;

	puts("ft_fill_file_content - a");
	line_index = 0;
	puts("ft_fill_file_content - b");
	while (ft_read_next_line(file))
	{
		puts("ft_fill_file_content - c");
		duplicated_line = ft_strdup(file->readed_line, FALSE);
		puts("ft_fill_file_content - d");
		if (duplicated_line == NULL)
			return (NULL);
		puts("ft_fill_file_content - e");
		file_content[line_index] = duplicated_line;
		puts("ft_fill_file_content - f");
		line_index++;
		puts("ft_fill_file_content - g");
	}
	puts("ft_fill_file_content - h");
	duplicated_line = ft_strdup(file->readed_line, FALSE);
	puts("ft_fill_file_content - i");
	if (duplicated_line == NULL)
		return (NULL);
	puts("ft_fill_file_content - j");
	file_content[line_index] = duplicated_line;
	puts("ft_fill_file_content - k");
	return (file_content);
}
