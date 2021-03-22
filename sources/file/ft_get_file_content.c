/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_content.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:59:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/03/22 19:58:07 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_get_file_content(char *path)
{
	char	**file_content;
	t_file	*file;
	size_t	line_index;
	char	*duplicated_line;

	puts("ft_get_file_content - a");
	file_content = ft_create_file_content(path);
	puts("ft_get_file_content - b");
	if (file_content == NULL)
		return (NULL);
	puts("ft_get_file_content - c");
	file = ft_open_file(path, O_RDONLY);
	puts("ft_get_file_content - d");
	if (file == NULL)
		return (ft_destroy_file_content(file_content));
	puts("ft_get_file_content - e");
	line_index = 0;
	puts("ft_get_file_content - f");
	while (ft_read_next_line(file))
	{
		puts("ft_get_file_content - g");
		duplicated_line = ft_strdup(file->readed_line, TRUE);
		puts("ft_get_file_content - h");
		if (duplicated_line == NULL)
			ft_close_file(file);
		puts("ft_get_file_content - i");
		if (duplicated_line == NULL)
			return (ft_destroy_file_content(file_content));
		puts("ft_get_file_content - j");
		file_content[line_index] = duplicated_line;
		puts("ft_get_file_content - k");
		line_index++;
	}
	puts("ft_get_file_content - l");
	ft_close_file(file);
	puts("ft_get_file_content - m");
	return (file_content);
}
