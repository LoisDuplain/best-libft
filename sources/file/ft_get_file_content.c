/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_content.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:59:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/03/22 19:14:52 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_get_file_content(char *path)
{
	char	**file_content;
	t_file	*file;
	size_t	line_index;
	char	*duplicated_line;

	file_content = ft_create_file_content(path);
	file = ft_open_file(path, O_RDONLY);
	if (file == NULL)
		return (ft_destroy_file_content(file_content));
	line_index = 0;
	while (ft_read_next_line(file))
	{
		duplicated_line = ft_strdup(file->readed_line, TRUE);
		if (duplicated_line == NULL)
			ft_close_file(file);
		if (duplicated_line == NULL)
			return (ft_destroy_file_content(file_content));
		file_content[line_index] = duplicated_line;
		line_index++;
	}
	ft_close_file(file);
	return (file_content);
}
