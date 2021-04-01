/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_file_content.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 20:23:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/04/01 11:54:41 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_fill_file_content(char **file_content, t_file *file)
{
	size_t	line_index;
	char	*duplicated_line;

	line_index = 0;
	while (ft_read_next_line(file))
	{
		duplicated_line = ft_strdup(file->readed_line, FALSE);
		if (duplicated_line == NULL)
			return (NULL);
		file_content[line_index] = duplicated_line;
		line_index++;
	}
	duplicated_line = ft_strdup(file->readed_line, FALSE);
	if (duplicated_line == NULL)
		return (NULL);
	file_content[line_index] = duplicated_line;
	return (file_content);
}
