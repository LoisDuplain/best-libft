/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_file_content.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lduplain <lduplain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 18:59:55 by lduplain          #+#    #+#             */
/*   Updated: 2021/04/01 11:54:57 by lduplain         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_get_file_content(char *path)
{
	char	**file_content;
	t_file	*file;
	size_t	line_index;

	file_content = ft_create_file_content(path);
	if (file_content == NULL)
		return (NULL);
	file = ft_open_file(path, O_RDONLY);
	if (file == NULL)
		return (ft_destroy_file_content(&file_content));
	line_index = 0;
	file_content = ft_fill_file_content(file_content, file);
	ft_close_file(file);
	if (file_content == NULL)
		return (ft_destroy_file_content(&file_content));
	return (file_content);
}
